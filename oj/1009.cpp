#include<iostream>
using namespace std;
int main()
{
    float pi=3.14;
    float r,h;
    cin>>r;
    cin>>h;
    cout<<"C1="<<2*pi*r<<endl;
    cout<<"Sa="<<pi*r*r<<endl;
    cout<<"Sb="<<4*pi*r*r<<endl;
    printf("Va=%.2f\n",4*pi*r*r*r/3);
    cout<<"Vb="<<pi*r*r*h<<endl;
}