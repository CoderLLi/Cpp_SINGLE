#include<iostream>
using namespace std;
int main()
{
    int n=0;
    long long sum=0;
    cin>>n;
    for(;n>0;n--)
        sum+=n;
    cout<<sum;
    return 0;
}  