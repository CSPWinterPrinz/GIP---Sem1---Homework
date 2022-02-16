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
    int Zeit;
    cout << "Bitte geben Sie die Stunde der aktuellen Uhrzeit ein: ? ";
    cin >> Zeit;
    if (Zeit == 23 || Zeit >= 0 && Zeit <= 5)
        cout << "Gute Nacht.\n";
    else if (Zeit >= 6 && Zeit <= 10)
        cout << "Guten Morgen.\n";
    else if (Zeit >= 11 && Zeit <= 13)
        cout << "Mahlzeit.\n";
    else if (Zeit >= 14 && Zeit <= 17)
        cout << "Guten Tag.\n";
    else if (Zeit >= 18 && Zeit <= 22)
        cout << "Guten Abend.\n";
    else
        cout << "Keine erlaubte Stundenangabe.\n";
}

void Solve()
{
}

int main()
{
    Init();
    Solve();
}