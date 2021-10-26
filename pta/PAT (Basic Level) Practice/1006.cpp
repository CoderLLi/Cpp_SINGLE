#include<iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;

    for (int k = 0; k < int(str[0]-'0'); k++)
        cout << "B";
    for (int k = 0; k < int(str[1]-'0'); k++)
        cout << "S";
    for (int k = 0; k < int(str[2]-'0'); k++)
        cout << k + 1;
    return 0;
}