#include<iostream>
using namespace std;
#define For(i,a,b) for(int i=a;i<=b;i++)
#define _For(i,a,b) for(int i=a;i>=b;i--)
int sg[110][15][35],mon[110][15];
int q[]={0,31,28,31,30,31,30,31,31,30,31,30,31},t;
void init(){
	int tmp;
	For(a,1900,2001){
		For(j,1,12){
			mon[a-1900][j]=q[j];
		}
		if((((a%400)==0)||((a%4)==0))&&((a%100)==0))
		mon[a-1900][2]=29;
	}
	mon[2001-1900][12]=0;
	mon[2001-1900][11]=3;
	tmp=sg[2001-1900][11][4]=0;
	_For(i,2001,1900){
		_For(j,12,1){
			_For(k,mon[i-1900][j],1){
				if(j<12&&k<=mon[i-1900][j+1]){
		//			cout<<tmp<<endl;
					For(l,0,2){
						if(tmp!=l&&sg[i-1900][j+1][k]!=l){
							sg[i-1900][j][k]=l;
							break;
							}
					}
				}
				else if(j==12){
					For(l,0,2){
						if(tmp!=l&&sg[i-1900+1][1][k]!=l){
							sg[i-1900][j][k]=l;
							break;
							}
					}
				}
				else{
					if(tmp==0)
					sg[i-1900][j][k]=1;
					else
					sg[i-1900][j][k]=0;
				}
				tmp=sg[i-1900][j][k];
			}
		}
	}
}
int main(){
	init();
	cin>>t;
	int y,m,d;
	while(t--){
		cin>>y>>m>>d;
		if(sg[y-1900][m][d]==0){
			cout<<"NO\n";
		}
		else
		cout<<"YES\n";
	}
	return 0;
}
