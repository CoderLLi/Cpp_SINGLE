#include<iostream>
#include<vector>
using namespace std;
bool isPrime(int a){//将i<a改成i*i<=a即可不overtime
    for(int i=2;i<a;i++){
        if(a%i==0) return false;
    }
    return true;
}
int main()
{
    int m,n,count=0,z=2;
    cin>>m>>n;
    vector<int> prime; 
    while(count<n){
        if (isPrime(z)){
            count++;
            if(count>=m) prime.push_back(z);

        }
        z++;
    }
    count=0;
    for(int i=0;i<prime.size();i++){
        count++;
        if(count%10!=1) printf(" ");
        printf("%d",prime[i]);
        if(count%10==0) printf("\n");

    }
    return 0;
}