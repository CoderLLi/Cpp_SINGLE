#include<iostream>
using namespace std;
int main()
{
    float x;
    float y;
    cin>>x;
    if(x>15) y=2.5*x-17.5;
    else y=4*x/3;
    printf("%.2f",y);
}