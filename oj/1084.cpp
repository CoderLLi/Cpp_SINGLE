#include<iostream>
using namespace std;
int maxn(int n,int m)
{
    int temp;
    if (m>n){
        temp = m;
        m=n;
        n=temp;
    }
    while(temp=n%m){
        n=m;
        m=temp;
    }
    return m;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int max;
    max=maxn(m,n);
    cout<<max<<" "<<n*m/max;
}