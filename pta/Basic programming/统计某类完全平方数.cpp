#include <stdio.h>
#include <math.h>

int IsTheNumber ( const int N );

int main()
{
    int n1, n2, i, cnt;

    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}

/* 你的代码将被嵌在这里 */

int IsTheNumber ( const int N ){//const修饰无法更改
    int M=N;
    int a[10];
    int j=0;
    while(M>=10)
    {
        a[j++]=M%10;//将除最高位之外的每一位数字存储到数组中
        M=M/10;
    }
    a[j]=M;
   
    double sq=sqrt(N);
    int intsq=sq;
    if (sq==intsq){
        for (int i=0;i<j;i++){
            for (int m=i+1;m<=j;m++){
                if (a[m]==a[i])
                    return 1;
            }
        }
    }
    return 0;
}