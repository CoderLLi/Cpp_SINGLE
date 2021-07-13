#include<bits/stdc++.h>
using namespace std;
int main()

{
    double x1,x2,y1,y2;
    cin >>x1>>y1;
    cin >>x2>>y2;
    if(fabs(x1-x2==0))
    {
        cout <<"INF\n\n"<<endl;
        return 0;
    }
    else {
        printf("%.2lf\n\n",(y2-y1)/(x2-x1));
        }
    return 0;
}