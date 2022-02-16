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
    int a1, a2, a3;
    cout << "Bitte geben Sie die 1. Zahl ein: ? ";
    cin >> a1;
    cout << "Bitte geben Sie die 2. Zahl ein: ? ";
    cin >> a2;
    cout << "Bitte geben Sie die 3. Zahl ein: ? ";
    cin >> a3;
    cout << "Die kleinste eingegebene Zahl lautet: " << min(a1, min(a2, a3)) << endl;
    cout << "Die groesste eingegebene Zahl lautet: " << max(a1, max(a2, a3)) << endl;
}

void Solve()
{
}

int main()
{
    Init();
    Solve();
}