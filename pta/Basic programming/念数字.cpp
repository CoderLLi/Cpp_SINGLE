#include<iostream>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    if(stoi(a)<0)
    {
        cout<<"fu ";
    }
    for(int i=0;i<a.length()-1;i++)
    {
        if(a[i]=='0')printf("ling ");
        else if(a[i]=='1')printf("yi ");
        else if(a[i]=='2')printf("er ");
        else if(a[i]=='3')printf("san ");
        else if(a[i]=='4')printf("si ");
        else if(a[i]=='5')printf("wu ");
        else if(a[i]=='6')printf("liu ");
        else if(a[i]=='7')printf("qi ");
        else if(a[i]=='8')printf("ba ");
        else if(a[i]=='9')printf("jiu ");
    }
    int i=a.length()-1;
    if(a[i]=='0')printf("ling");
    else if(a[i]=='1')printf("yi");
    else if(a[i]=='2')printf("er");
    else if(a[i]=='3')printf("san");
    else if(a[i]=='4')printf("si");
    else if(a[i]=='5')printf("wu");
    else if(a[i]=='6')printf("liu");
    else if(a[i]=='7')printf("qi");
    else if(a[i]=='8')printf("ba");
    else if(a[i]=='9')printf("jiu");
    return 0;
}