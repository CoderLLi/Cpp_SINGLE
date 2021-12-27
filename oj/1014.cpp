#include<iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    cout<<a.length()<<endl;
    for (int i=0;i<a.length();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for (int i=a.length()-1;i>=0;i--){
        cout<<a[i];
    }
}