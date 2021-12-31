#include<iostream>
using namespace std;

int main()
{
    long long Sn=0,t=1;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        t=t*i; 
        Sn=Sn+t;
    }
    cout<<Sn;
    return 0;
}