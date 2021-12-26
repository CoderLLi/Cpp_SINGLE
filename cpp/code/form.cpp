#include <stdio.h>
#include <malloc.h>
//#include <iostream>
#define QUEUE_INIT_SIZE 100
#define QUEUE_INC 50
typedef int ElemType;
//using namespace std;
typedef struct
{
    ElemType *data; /* 动态分配存储空间*/
    int queuesize;
    int front; /*头指针，若队列不空，指向队列头元素*/
    int rear;  /*尾指针，若队列不空，指向队列尾元素*/
} SqQueue;
bool InitQueue(SqQueue &Q)//初始化
{
    Q.data = (ElemType *)malloc(QUEUE_INIT_SIZE * sizeof(ElemType));//动态分配内存
    if (!Q.data)//检测是否为空
        return false;
    //cout<<Q.data;
    Q.front = 0;
    Q.rear = 0;
    Q.queuesize = QUEUE_INIT_SIZE;
}
bool DestroyQueue(SqQueue &Q)
{
    if (Q.data)
    {
        free(Q.data);//释放空间
        Q.data = NULL;
    }
    return true;
}
void ClearQueue(SqQueue &Q)
{
    Q.front = 0;
    Q.rear = 0;
}
bool QueueEmpty(SqQueue Q)//检测空队列
{
    return Q.front == Q.rear;
}
bool GetHead(SqQueue Q, ElemType &e)//输出队头
{
    if (Q.front == Q.rear)
        return false;
    e = Q.data[0];
    return true;
}
bool EnQueue(SqQueue &Q, ElemType e)//进队
{
    if ((Q.rear + 1) % Q.queuesize == Q.front)
    { /*队列满*/
        return false;
    }
    Q.data[Q.rear] = e;
    Q.rear = (Q.rear + 1) % Q.queuesize;
    return true;
}
bool OutQueue(SqQueue &Q, ElemType &e)
{
    if (Q.front == Q.rear)
        return false;
    e = Q.data[Q.front];
    Q.front = (Q.front + 1) % Q.queuesize;
    return true;
}
int safe(int location);
int farmerProblem()
{
    int movers, i, location, newlocation;
    int route[16]; /*记录已考察的状态路径*/
    for (i = 0; i < 16; i++)
        route[i] = -1;
    SqQueue moveTo;
    InitQueue(moveTo);
    EnQueue(moveTo, 0x00); /*准备初值*/
    route[0] = 0;
    while (!QueueEmpty(moveTo) && (route[15] == -1))
    {
        OutQueue(moveTo, location); /*得到现在的状态*/
        for (movers = 1; movers <= 8; movers <<= 1)
        { /* 农民总是在移动，随农民移动的也只能是在农民同侧的东西 */
            if ((0 != (location & 0x08)) == (0 != (location & movers)))
            {
                newlocation = location ^ (0x08 | movers);
                if (safe(newlocation) && (route[newlocation] == -1))
                {
                    route[newlocation] = location; /*记录路径*/
                    EnQueue(moveTo, newlocation);  /*压入队列*/
                }
            }
        }
    }
    if (route[15] != -1)
    {
        printf("1000-farmer,0100-wolf,0001-goat,0010-cabbage \n");
        printf("The reverse path is : \n");
        for (location = 15; location >= 0; location = route[location])
        {
            printf("The location is : %d\n", location);
            if (location == 0)
                return 1;
        }
    }
    else
        printf("No solution.\n");
    return 0;
}
int main()
{
    farmerProblem();
}
int farmer(int location) /*为农民设置参数8*/
{
    return (0 != (location & 0x08));
}
int wolf(int location) /*为狼设置参数4*/
{
    return (0 != (location & 0x04));
}
int cabbage(int location) /*为白菜设置参数2*/
{
    return (0 != (location & 0x02));
}
int goat(int location) /*为羊设置参数1*/
{
    return (0 != (location & 0x01));
}
int safe(int location) /* 为每种状态做测试，状态安全则返回1，否则返回0*/
{                      /*安全性判断函数，安全则返回1*/
    if ((goat(location) == cabbage(location)) && (goat(location) != farmer(location)))
        return 0; /* 羊和白菜在河的一侧且人不在，则羊就要吃白菜*/
    if ((goat(location) == wolf(location)) && (goat(location) != farmer(location)))
        return 0; /* 狼和羊在河的一侧且人不在，则狼就要吃羊*/
    return 1;     /* 其他状态是安全的*/
}
