#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i =1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
                {
                cout<<j<<'*'<<i<<'=';
                cout.setf(ios::left);//�趨���뷽ʽ
                cout.width(4);//�趨���
                cout<<i*j;
                }
            cout<<endl;
        }

return 0;
}