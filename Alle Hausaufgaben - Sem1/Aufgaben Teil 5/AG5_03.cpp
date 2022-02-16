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
    int a[N], V, cnt = 0;
    for (int i = 0; i < 4; ++i)
    {
        cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
        cin >> a[i];
    }
    cout << "Bitte geben Sie die Vergleichszahl ein: ? ";
    cin >> V;
    for (int i = 0; i < 4; ++i)
        if (a[i] == V)
            cnt++;
    cout << cnt << " Eingabezahlen waren gleich der Vergleichszahl.\n";
    cout << 4 - cnt << " Eingabezahlen waren ungleich der Vergleichszahl.\n";
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