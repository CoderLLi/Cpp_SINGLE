#include <stdio.h>

int main()
{
    int n,f,y;
    scanf("%d",&n);
    for(y=0;y<100;y++)
        for(f=0;f<100;f++)
            if(200*y+2*f==f*100+y-n){
                printf("%d.%d",y,f);
                return 0;
            }
    printf("No Solution");
    return 0;
}
