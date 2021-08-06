#include<iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    for (int k = 0; k < int(str[0]); k++)
        cout << "B";
    for (int k = 0; k < int(str[1]); k++)
        cout << "S";
    for (int k = 0; k < int(str[2]); k++)
        cout << k + 1<<endl;
    cout<<int(str[2])<<endl;
    return 0;
}