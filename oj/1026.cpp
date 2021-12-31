#include<iostream>

using namespace std;

int main()
{
    double a,xn1,xn;
    cin >> a;
    xn=a*0.5;
    xn1=(xn+a/xn)/2;
    while(abs(xn-xn1)>0.00001){
        xn=xn1;
        xn1=(xn+a/xn)/2;
    }
    printf("%.3f",xn1);
    return 0;
}