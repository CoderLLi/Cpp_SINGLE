#include<iostream>
using namespace std;
#define For(i,a,b) for(int i=a;i<=b;i++)//����ѭ��
#define _For(i,a,b) for(int i=a;i>=b;i--)//�ݼ�ѭ��
int sg[11][15][35],mon[11][15];
int q[]={0,31,28,31,30,31,30,31,31,30,31,30,31},t;//qΪ�·ݵ�����
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
	mon[2001-1990][12]=0;//����ֻ��2001��11��4
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
	cout<<"���������жϵĴ�����";
	cin>>t;
	int y,m,d;
	cout<<"���������գ��ÿո����"<<endl;
	while(t--){
		cin>>y>>m>>d;
		if(y<1990||y>2001)
		{
			cout<<"���������󣡣�������������һ�Σ�������"<<endl;
			cout<<"���������գ��ÿո����"<<endl;
			cin>>y>>m>>d;
		}
		if(m>12)
		{
			cout<<"�·�������󣡣�������������һ�Σ�������"<<endl;
			cout<<"���������գ��ÿո����"<<endl;
			cin>>y>>m>>d;
		}
		if(d>mon[y-1990][m])
		{
			cout<<"����������󣡣�������������һ�Σ�������"<<endl;
			cout<<"���������գ��ÿո����"<<endl;
			cin>>y>>m>>d;
		}
		if(sg[y-1990][m][d]==0){
			cout<<"�����Ի�ʤ\n";
		}
		else
		cout<<"���Ի�ʤ\n";
	}
	return 0;
}