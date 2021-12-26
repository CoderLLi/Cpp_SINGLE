#include"stdio.h"
int main()
{
    int n, m1,m2,temp;
    scanf("%d",&n);
    for(int i = 0; i<n; i++)
    {
        temp=0;
        scanf("%d",&m1);
        scanf("%d",&m2);
        if (m1%m2!=0) temp=1;
        temp+=m1/m2;
        if(temp%2==0){
            printf("Zhang\n");
        }
        else{
            printf("Wang\n");
        }
    }
    return 0;
}