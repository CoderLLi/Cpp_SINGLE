#include <stdio.h>

void Print_Factorial ( const int N );

int main()
{
    int N;

    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
void Print_Factorial ( const int N ){
    int a[3000];
    int n=N;
    if(n<0||n>1000){
        printf("Invalid input");
        return ;
    }
    if(n==0){
        printf("1");
      
    }
    else{
        int w=0;
        int i=0, j=0;
        int t=n;
        int k=0;    // ��ʾ���ݵ�λ����

        i=0, k=0;
        while(t)  //�����ְ�λ����������
        {
            a[i++] = t%10;
            t/=10;
            k++;
        }

        for (j=n-1; j>1; j--)  //��ʼ�׳�
        {
            w=0;    // ��ʾ��λ
            for (i=0; i<k; i++)
            {
                t = a[i]*j+w;  //ÿ��λ���˳�������+�Ƿ��λ
                a[i] = t%10;
                w = t/10;
            }

            while(w)  //��Ҫ��λ��
            {
                a[i++] = w%10;
                w/=10;
                k++;
            }
        }
        int ttt=0;
        int ii=0;

        for (ii=k-1; ii>=0; ii--)
        {
            printf("%d",a[ii]);
        }
    }


  
}