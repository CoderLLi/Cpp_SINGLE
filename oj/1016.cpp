#include<iostream>
using namespace std;
int main()//
//�����Լ����շת�����
// ��С������=�����������֮���������ǵ����Լ��
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