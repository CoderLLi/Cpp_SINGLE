#include<stdio.h>
#include<math.h>
main()
{
  float a,b,c,d;
  scanf("%f%f%f%f",&a,&b,&c,&d);
  int i;
  char map[4]={'+','-','*','/'};
  for(i=0;i<4;i++)
  {
    float x,y;
    switch(i)
    {
      case 0:x=a+c;y=b+d;break;
      case 1:x=a-c;y=b-d;break;
      case 2:x=a*c-b*d;y=b*c+a*d;break;
      case 3:x=(a*c+b*d)/(c*c+d*d);y=(b*c-a*d)/(c*c+d*d);break;
    }
    if(b>=0&&d>=0)
    printf("(%.1f+%.1fi) %c (%.1f+%.1fi) = ",a,b,map[i],c,d);
    else if(b>=0&&d<0)
    printf("(%.1f+%.1fi) %c (%.1f%.1fi) = ",a,b,map[i],c,d);
     else if(b<0&&d>=0)
    printf("(%.1f%.1fi) %c (%.1f+%.1fi) = ",a,b,map[i],c,d);
    else
    printf("(%.1f%.1fi) %c (%.1f%.1fi) = ",a,b,map[i],c,d);
    if(fabs(x)<0.1&&fabs(y)<0.1){printf("0.0\n");continue;}
    int flag=0;
    if(fabs(x)>=0.1){printf("%.1f",x);flag=1;}
    if(fabs(y)>=0.1)
    {
      if(flag&&y>0.0)printf("+%.1fi",y);
      else printf("%.1fi",y);
    }
    printf("\n");
  }
}