#include<iostream>
#include <string.h> 
using namespace std;
int main()
{
    int len,count=0,j;
    char str[500001];
    cin.getline(str,500001);//scanf�������ո�ͻس������ֹͣ����gets֮�������س��Ż�ֹͣ
    len=strlen(str);//�����ַ������ȣ��ո�Ҳ��
    for(int i=len-1;i>=0;i--)//�Ӻ���ǰ��ʼ��
    {
        if(str[i]!=' ')
        {
            for(j=i;j>=0;j--)
            {
             if(str[j]==' ') break;
            }
            int head=j+1;//���⿪ʼ��j���ڵ�λ�þ��ǿո����ڵ�λ�ã�head�����ǿո�����һ����ĸ
            if(count>0) printf(" ");//������ǵ������һ�����ʣ���������ո���Ϊ�����������һ�����ʺ󲻼ӿո����Ҳֻ�ܷ�������ַ���ǰ��
            for(int k=head;k<=i;k++)//i��ʱ���Ǽ���������ʵ����һ����ĸ
            {
                printf("%c",str[k]);
            }
            i=j;//��������һ����i��ֵѭ��֮�����ڵ����ڶ����ַ��ϣ��������Ѿ���Ҫ�ҵڶ��������ˡ����Դ�ʱ�Ͱ�j��ֵ����i
            count++;//count���㿪ʼ��
        }
    }
    return 0;
}