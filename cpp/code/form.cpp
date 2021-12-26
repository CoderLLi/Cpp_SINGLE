#include <stdio.h>
#include <malloc.h>
//#include <iostream>
#define QUEUE_INIT_SIZE 100
#define QUEUE_INC 50
typedef int ElemType;
//using namespace std;
typedef struct
{
    ElemType *data; /* ��̬����洢�ռ�*/
    int queuesize;
    int front; /*ͷָ�룬�����в��գ�ָ�����ͷԪ��*/
    int rear;  /*βָ�룬�����в��գ�ָ�����βԪ��*/
} SqQueue;
bool InitQueue(SqQueue &Q)//��ʼ��
{
    Q.data = (ElemType *)malloc(QUEUE_INIT_SIZE * sizeof(ElemType));//��̬�����ڴ�
    if (!Q.data)//����Ƿ�Ϊ��
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
        free(Q.data);//�ͷſռ�
        Q.data = NULL;
    }
    return true;
}
void ClearQueue(SqQueue &Q)
{
    Q.front = 0;
    Q.rear = 0;
}
bool QueueEmpty(SqQueue Q)//���ն���
{
    return Q.front == Q.rear;
}
bool GetHead(SqQueue Q, ElemType &e)//�����ͷ
{
    if (Q.front == Q.rear)
        return false;
    e = Q.data[0];
    return true;
}
bool EnQueue(SqQueue &Q, ElemType e)//����
{
    if ((Q.rear + 1) % Q.queuesize == Q.front)
    { /*������*/
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
    int route[16]; /*��¼�ѿ����״̬·��*/
    for (i = 0; i < 16; i++)
        route[i] = -1;
    SqQueue moveTo;
    InitQueue(moveTo);
    EnQueue(moveTo, 0x00); /*׼����ֵ*/
    route[0] = 0;
    while (!QueueEmpty(moveTo) && (route[15] == -1))
    {
        OutQueue(moveTo, location); /*�õ����ڵ�״̬*/
        for (movers = 1; movers <= 8; movers <<= 1)
        { /* ũ���������ƶ�����ũ���ƶ���Ҳֻ������ũ��ͬ��Ķ��� */
            if ((0 != (location & 0x08)) == (0 != (location & movers)))
            {
                newlocation = location ^ (0x08 | movers);
                if (safe(newlocation) && (route[newlocation] == -1))
                {
                    route[newlocation] = location; /*��¼·��*/
                    EnQueue(moveTo, newlocation);  /*ѹ�����*/
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
int farmer(int location) /*Ϊũ�����ò���8*/
{
    return (0 != (location & 0x08));
}
int wolf(int location) /*Ϊ�����ò���4*/
{
    return (0 != (location & 0x04));
}
int cabbage(int location) /*Ϊ�ײ����ò���2*/
{
    return (0 != (location & 0x02));
}
int goat(int location) /*Ϊ�����ò���1*/
{
    return (0 != (location & 0x01));
}
int safe(int location) /* Ϊÿ��״̬�����ԣ�״̬��ȫ�򷵻�1�����򷵻�0*/
{                      /*��ȫ���жϺ�������ȫ�򷵻�1*/
    if ((goat(location) == cabbage(location)) && (goat(location) != farmer(location)))
        return 0; /* ��Ͱײ��ںӵ�һ�����˲��ڣ������Ҫ�԰ײ�*/
    if ((goat(location) == wolf(location)) && (goat(location) != farmer(location)))
        return 0; /* �Ǻ����ںӵ�һ�����˲��ڣ����Ǿ�Ҫ����*/
    return 1;     /* ����״̬�ǰ�ȫ��*/
}
