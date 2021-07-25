#include<iostream>
#include <string.h> 
using namespace std;
int main()
{
    int len,count=0,j;
    char str[500001];
    cin.getline(str,500001);//scanf是碰见空格和回车就输出停止，而gets之有碰见回车才会停止
    len=strlen(str);//计算字符串长度，空格也算
    for(int i=len-1;i>=0;i--)//从后往前开始找
    {
        if(str[i]!=' ')
        {
            for(j=i;j>=0;j--)
            {
             if(str[j]==' ') break;
            }
            int head=j+1;//从这开始，j所在的位置就是空格所在的位置，head正好是空格后面第一个字母
            if(count>0) printf(" ");//如果不是第输出第一个单词，就先输入空格，因为输出结果中最后一个单词后不加空格，这个也只能放在输出字符的前面
            for(int k=head;k<=i;k++)//i此时正是即将输出单词的最后一个字母
            {
                printf("%c",str[k]);
            }
            i=j;//若不加这一步，i的值循环之后是在倒数第二个字符上，而我们已经需要找第二个单词了。所以此时就把j的值赋给i
            count++;//count从零开始加
        }
    }
    return 0;
}