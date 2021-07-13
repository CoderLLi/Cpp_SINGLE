#include<iostream>
using namespace std;
#define For(i,a,b) for(int i=a;i<=b;i++)//递增循环
#define _For(i,a,b) for(int i=a;i>=b;i--)//递减循环
int sg[11][15][35],mon[11][15];
int q[]={0,31,28,31,30,31,30,31,31,30,31,30,31},t;//q为月份的日期
void init()
{
	int tmp;
	For(a,1990,2001)
	{
		For(j,1,12)
		{
			mon[a-1990][j]=q[j];
		}
		if(a%400==0||a%4==0&&a%100!=0)
		mon[a-1990][2]=29;
	}
	mon[2001-1990][12]=0;//日期只到2001，11，4
	mon[2001-1990][11]=3;//
	tmp=sg[2001-1990][11][4]=0;
	_For(i,2001,1990)
	{
		_For(j,12,1)
		{
			_For(k,mon[i-1990][j],1)
			{
				if(j<12&&k<=mon[i-1990][j+1])
				{
					For(l,0,2)
					{
						if(tmp!=l&&sg[i-1990][j+1][k]!=l)
						{
							sg[i-1990][j][k]=l;
							break;
						}
					}
				}
				else if(j==12)
				{
					For(l,0,2)
					{
						if(tmp!=l&&sg[i-1990+1][1][k]!=l)
						{
							sg[i-1990][j][k]=l;
							break;
						}
					}
				}
				else{
					if(tmp==0)
					sg[i-1990][j][k]=1;
					else
					sg[i-1990][j][k]=0;
				}
				tmp=sg[i-1990][j][k];
			}
		}
	}
}
int main(){
	init();
	cout<<"请输入你判断的次数：";
	cin>>t;
	int y,m,d;
	cout<<"输入年月日，用空格隔开"<<endl;
	while(t--){
		cin>>y>>m>>d;
		if(y<1990||y>2001)
		{
			cout<<"年份输入错误！！！（请再输入一次！！！）"<<endl;
			cout<<"输入年月日，用空格隔开"<<endl;
			cin>>y>>m>>d;
		}
		if(m>12)
		{
			cout<<"月份输入错误！！！（请再输入一次！！！）"<<endl;
			cout<<"输入年月日，用空格隔开"<<endl;
			cin>>y>>m>>d;
		}
		if(d>mon[y-1990][m])
		{
			cout<<"日期输入错误！！！（请再输入一次！！！）"<<endl;
			cout<<"输入年月日，用空格隔开"<<endl;
			cin>>y>>m>>d;
		}
		if(sg[y-1990][m][d]==0){
			cout<<"不可以获胜\n";
		}
		else
		cout<<"可以获胜\n";
	}
	return 0;
}