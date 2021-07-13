#include <iostream>

using namespace std;
const int maxn = 11;
int P[maxn], n, hashTable[maxn] = {false};

void generateP(int index)
{
    if (index == n + 1)
    {
        for (int i = 1; i <= n; i ++ )
        {
            cout << P[i];
        }
        cout << endl;
        return;
    }

    for (int x = 1; x <= n; x ++ )
    {
        if (hashTable[x] == false)
        {
            P[index] = x;
            hashTable[x] = true;
            generateP(index + 1);
            hashTable[x] = false;
        }
    }
}

int main()
{
    n = 5;
    generateP(1);

    return 0;
}
