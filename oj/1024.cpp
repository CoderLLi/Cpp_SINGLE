#include<iostream>
using namespace std;
int main(){
    int n;
    double high,length=0;
    cin >>high;
    cin >>n;
    length=-high;
    for (int i=1;i<=n;i++){
        length+=2*high;
        high=high*0.5;  
    }
    printf("%.2f %.2f",high,length);
}