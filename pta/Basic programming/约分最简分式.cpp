#include<stdio.h>
 
int main()
{
    int zi,mu,i;
    scanf("%d/%d", &zi, &mu);
    for(i = mu; i >= 2; i--){
        if(zi % i == 0 && mu % i == 0){
           zi = zi / i;
           mu = mu / i;
        }
    }
    printf("%d/%d", zi, mu);
    return 0;
}


