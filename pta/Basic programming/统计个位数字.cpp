#include <stdio.h>

int Count_Digit ( const int N, const int D );

int main()
{
    int N, D;

    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

/* 你的代码将被嵌在这里 */
int Count_Digit ( const int N, const int D ){
    int M=N;
    if(M<0)M=-M;
    int a[10];
    int j=0;
    while(M>=10)
    {
        a[j++]=M%10;//将除最高位之外的每一位数字存储到数组中
        M=M/10;
    }
    a[j]=M;
    int sum=0;
    for (int i=0;i<=j;i++)
    {
        if(a[i]==D) sum++;
    }
    return sum;

}