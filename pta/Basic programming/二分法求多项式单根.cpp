#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3f3f3f3f
#define mem(a,b) memset(a,b,sizeof(a))
 
int main()
{
	double a1,a2,a3,a0;
	double a,b;
	cin>>a3>>a2>>a1>>a0;
	cin>>a>>b;
	int tt=100,flag=0;
	while(tt--)
	{
		double t=(a+b)/2;
		double fa=a3*a*a*a+a2*a*a+a1*a+a0;
		double fb=a3*b*b*b+a2*b*b+a1*b+a0;
		double fx=a3*t*t*t+a2*t*t+a1*t+a0;
		if(fabs(a-b)<0.01)
		{
			printf("%.2lf\n",t);
			flag=1;
			break;
		}
		else if(fx*fa>0)
			a=(a+b)/2;
		else if(fx*fb>0)
			b=(a+b)/2;
	}
	if(!flag)
		printf("%.2lf\n",(a+b)/2);
	return 0;
}