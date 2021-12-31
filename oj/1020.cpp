#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int suma=0;
    double sumb=0,sumc=0;
    int a,b,c;
    cin >>a;
    cin >>b;
    cin >>c;
    for(int i=1;i<=a;i++)suma+=i;
    for(int i=1;i<=b;i++)sumb+=pow(i,2);
    for(double i=1;i<=c;i++)sumc+=(1/i);
    printf("%.2f",suma+sumb+sumc);
}