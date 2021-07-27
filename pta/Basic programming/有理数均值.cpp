#include<stdio.h>
int gcd(int p,int q)
{
    if (q==0) return p;
    int r = p%q;
    return gcd(q,r);
}
int main()
{
    int N,sumA=0,sumB=1;
    scanf("%d",&N);
 
    for(int i=0; i<N; i++)
    {
        int a=0,b=1;
        scanf("%d/%d",&a,&b);
        sumA *= b;
        sumA += a*sumB;
        sumB *= b;
 
        if(i==N-1) sumB*=N;
        int divisor = gcd(sumA,sumB);
        sumA/=divisor;sumB/=divisor;
    }
 
 
    if (sumA==0)
        printf("0");
    else if(sumB==1)
        printf("%d",sumA);
    else
        printf("%d/%d",sumA,sumB);
 
    return 0;
}