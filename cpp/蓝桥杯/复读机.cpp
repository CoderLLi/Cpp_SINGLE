#include<iostream>
#include <string>
using namespace std;
int main(){
    int n;
    string a;
    cin >> n;
    getchar();
    for(int i=0;i<=n;i++)
    {
        getline(cin,a);
        cout<<a<<endl;
    }
}
