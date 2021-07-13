#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h> 
#include<math.h>
 int main()
{
     int r;
     double s, PI;
     scanf("%d", &r);
     PI = atan(1.0) * 4;
     s = PI*r*r;
     printf("%.7lf", s);
     getchar();
     return 0;
}