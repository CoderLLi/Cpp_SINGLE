#include<iostream>
using namespace std;
int isprime(int n) {
    if(n <= 1)
        return 0;
    else if(n == 2 || n == 3)
        return 1;
    else {
        for(int i = 2; i * i < n; i++) {
            if(n % i == 0) {
                return 0;
            }
        }
        return 1;
    }
}
int main(){
    int max,min,flag,temp;
    cin>>min>>max;
    for (int i = min; i <= max; i++)
    {
        flag=0;
        temp=i;
        cout<<i<<"=";
        while(temp!=1){
            for(int j=2;j<=temp;j++){
                if(isprime(j)&&temp%j==0){
                    if(flag)cout<<"*";
                    cout << j;
                    temp=temp/j;
                    flag=1;
                    break;
                }
            }

        }
        cout<<endl;
    }
    
}