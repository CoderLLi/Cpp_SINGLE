#include<iostream>
using namespace std;
int main()
{
    float n,h;
    float b=50;
    float m;
    cin >>n;
    cin>>h;
    if (n<5) {b=30;}
    if(h>40) {m=40*b+(h-40)*1.5*b;}
    if(h<=40) {m=h*b;}
    printf("%.2f",m);
}