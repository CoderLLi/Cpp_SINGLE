#include <stdio.h>

int Count_Digit ( const int N, const int D );

int main()
{
    int N, D;

    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int Count_Digit ( const int N, const int D ){
    int M=N;
    if(M<0)M=-M;
    int a[10];
    int j=0;
    while(M>=10)
    {
        a[j++]=M%10;//�������λ֮���ÿһλ���ִ洢��������
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