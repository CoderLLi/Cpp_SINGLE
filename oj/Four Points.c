#include<stdio.h>
struct dian
{
    int x,y,z;
}a[1001];
int main()
{
    int t,i;scanf("%d",&t);
    while(t--)
    {
        for(i=0;i<4;i++)
        {
            scanf("%d%d%d",&a[i].x,&a[i].y,&a[i].z);
        }
        int x1,y1,z1,x2,y2,z2,x3,y3,z3;
        x1=a[0].x-a[1].x;x2=a[0].x-a[2].x;x3=a[0].x-a[3].x;
        y1=a[0].y-a[1].y;y2=a[0].y-a[2].y;y3=a[0].y-a[3].y;
        z1=a[0].z-a[1].z;z2=a[0].z-a[2].z;z3=a[0].z-a[3].z;
        if(x1*y2*z3+x2*y3*z1+x3*y1*z2-x1*y3*z2-x2*y1*z3-x3*y2*z1==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}