#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int sum = 0,a=2;
    while(n--){
        sum += a;
        a=10*a+2;
    }
    cout<<sum;
}