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
    char x;
    string Erg;
    cout << "Bitte geben Sie das Zeichen ein: ? ";
    cin >> x;

    if (x == 'e')
        cout << "Das Programm beendet sich jetzt.\n";
    else if (x >= '0' && x <= '9')
        cout << (int)x - '0' << " + 5 = " << (int)x - '0' + 5 << endl;
    else
        cout << "Weder 'e' noch Ziffer\n";
}

void Solve()
{
}

int main()
{
    Init();
    Solve();
}