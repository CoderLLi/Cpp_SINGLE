#include<iostream>
using namespace std;
int main()
{
    int n,flag=0;
    cin >> n;
    for(int i =2;i<n;i++){
        for(int j=2;j<i;j++){
            if(i%j==0)flag=1;
        }
        if(flag==0)printf("%d\n",i);
        flag=0;
    }
}