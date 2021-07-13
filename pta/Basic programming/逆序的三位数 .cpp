#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    b=a/100+a%100/10*10+a%10*100;
    cout<<b;
}