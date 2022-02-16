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
    string X;
    cout << "Bitte die Zahl oder das Wort 'ende' eingeben: ? ";
    cin >> X;
    if (X[0] == 'e')
        cout << "Das Programm beendet sich jetzt." << endl;
    else
    {
        int sum = 0;
        for (int i = 0; i < X.length(); ++i)
            sum = sum * 10 + (X[i] - '0');
        cout << "Der doppelte Wert betraegt: " << sum * 2 << endl;
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