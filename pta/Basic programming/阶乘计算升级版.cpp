#include <stdio.h>

void Print_Factorial ( const int N );

int main()
{
    int N;

    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

/* 你的代码将被嵌在这里 */
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
        int k=0;    // 表示数据的位数。

        i=0, k=0;
        while(t)  //把数字按位数传入数组
        {
            a[i++] = t%10;
            t/=10;
            k++;
        }

        for (j=n-1; j>1; j--)  //开始阶乘
        {
            w=0;    // 表示进位
            for (i=0; i<k; i++)
            {
                t = a[i]*j+w;  //每个位数乘乘数因子+是否进位
                a[i] = t%10;
                w = t/10;
            }

            while(w)  //需要进位了
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