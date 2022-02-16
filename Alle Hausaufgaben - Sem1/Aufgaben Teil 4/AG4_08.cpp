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
    string S;
    cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
    getline(cin, S);
    cout << "Eingabetext: " << S << endl;
    cout << "Ergebnis: ";
    for (int i = S.length() - 1; i >= 0; --i)
        cout << S[i];
    cout << endl;
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