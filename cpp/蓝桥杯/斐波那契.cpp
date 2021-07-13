#include<iostream>
using namespace std;
long feibo(long i)
{
    int f1=1,f2=1,f3=1;
    if(i==1||i==2)
    {
        return 1;
    }
    for(int m=3;m<=i;m++)
    {
        f1=f2;
        f2=f3;
        f3=(f2+f1)%10007;
    }
    return f3;
}
int main()
{
    long a;
    cin>>a;
    cout<<feibo(a);
    return 0;
}