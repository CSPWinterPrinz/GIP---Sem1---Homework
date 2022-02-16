#include <iostream>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string.h>
using namespace std;

//-----------------------------------------------------
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const int oo = 1000000000;

void Init()
{
    int a[100];
    for (int i = 0; i <= 8; ++i)
    {
        while (true)
        {
            cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
            cin >> a[i];
            if (a[i] >= 1 && a[i] <= 6)
                break;
        }
    }
    for (int i = 0; i < 9; ++i)
    {
        cout << "Die " << i + 1 << ". eingegebene Zahl lautete: " << a[i] << endl;
    }
}

void Solve()
{
}

int main()
{
    Init();
    Solve();
    system("PAUSE");
    return 0;
}