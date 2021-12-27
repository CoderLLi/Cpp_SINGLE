#include<iostream>
using namespace std;
int main()//
//求最大公约数用辗转相除法
// 最小公倍数=输入的两个数之积除于它们的最大公约数
{
    int a,b,t,r,n;
    cin>>a;
    cin>>b;
    if(a<b)
    {t=b;b=a;a=t;}
    r=a%b;
    n=a*b;
    while(r!=0)
    {
        a=b;
        b=r;
        r=a%b;
    }
    cout<<b<<" "<<n/b;
    return 0;
}