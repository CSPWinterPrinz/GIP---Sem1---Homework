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
const long long N = 1000;

void Init()
{
    int a[N], X;
    for (int i = 0; i < 6; ++i)
    {
        bool flag = 0;
        while (!flag)
        {
            cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
            cin >> a[i];
            if (a[i] > 0 && a[i] < 7)
                flag = 1;
        }
    }
    cout << "Bitte geben Sie die Suchzahl ein: ? ";
    cin >> X;
    for (int i = 0; i < 6; ++i)
        if (a[i] == X)
            X = -1;
    cout << ((X == -1) ? "Die Suchzahl kam unter den Eingaben vor." : "Die Suchzahl kam NICHT unter den Eingaben vor.") << endl;
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