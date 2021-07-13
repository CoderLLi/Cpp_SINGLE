#include <iostream>
using namespace std;
int main()
{
    float a;
    cin>>a;
    float temp=1;
    float i=1,result=1;
    while(temp>=a){
        temp *= i / (2 * i + 1);
        result += temp;
        i++;
    }
    printf("%.6lf",result * 2);
    return 0;
}