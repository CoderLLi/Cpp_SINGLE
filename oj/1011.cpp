#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a<b)a=b;
    if(a<c)a=c;
    printf("%d",a);
}