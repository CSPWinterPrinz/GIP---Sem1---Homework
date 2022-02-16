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
    int a[5], cnt = 0;
    for (int i = 1; i <= 4; ++i)
    {
        cout << "Bitte geben Sie die " << i << ". Zahl ein: ? ";
        cin >> a[i];
        if (a[i] == 99)
            ++cnt;
    }

    cout << cnt << " Eingabezahlen waren gleich der Vergleichszahl 99.\n";
    cout << 4 - cnt << " Eingabezahlen waren ungleich der Vergleichszahl 99.\n";
}

void Solve()
{
}

int main()
{
    Init();
    Solve();
}