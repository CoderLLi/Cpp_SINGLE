#include<iostream>
using namespace std;
int main()
{
    int n,u,d;
    int t=0;
    int s=0;
    cin>>n;
    cin>>u;
    cin>>d;
    while(s<n)
    {
        s+=u;
        t++;
        if(s<n){
            t++;
            s-=d;
        }
    }
    printf("%d",t);
}