#include<iostream>
using namespace std;
int main()
{
    int a[10],temp,n;
    for(int i = 0;i<9;i++){
        cin>>a[i];
    }
    cin>>n;
    temp=n;
    for(int i =0;i<9;i++){
        if(n<a[i]){
            temp=a[i];
            a[i]=n;
            n=temp;
        }
    }
    a[9]=n;
    for(int i = 0;i<10;i++){
        cout<<a[i]<<endl;
    }
}