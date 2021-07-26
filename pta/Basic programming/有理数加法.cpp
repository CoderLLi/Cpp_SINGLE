#include<iostream>
using namespace std;
int main()
{
    int a1,b1,a2,b2;
    scanf("%d/%d %d/%d",&a1,&b1,&a2,&b2);
    int a,b;
    if(b1==b2){
        b=b1;
        a=a1+a2;
    }else{
        b=b1*b2;
        a=a1*b2+a2*b1;
    }
    for(int i=a;i>0;i--){
        if(a%i==0&&b%i==0){
            a=a/i;
            b=b/i;
            break;
        }
    }
    if(a%b==0)
        printf("%d",a/b);
    else
        printf("%d/%d",a,b);
    return 0;

}