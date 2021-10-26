#include<iostream>
using namespace std;
bool isPrime(int a){
    for(int i=2;i<a;i++){
        if(a%i==0) return false;
    }
    return true;
}
int main()
{
    int m,n;
    cin>>m;
    cin>>n;
    int number = 2;
    int count=0,z=0;
    while(count<=n){
        if(isPrime(number)){
            count++;
            if(count<n && count>=m ) {
                z++;
                if(z%10!=0) cout<<number<<" ";
                if(z%10==0) cout<<number<<endl;
            }
            
            if(count==n) cout<<number;
        }
        number++;
    }
}