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
    int cnt = 0;
    char T, E;
    cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
    getline(cin, S);
    cout << "Bitte den zu ersetzenden Buchstaben eingeben: ? ";
    cin >> T;
    cout << "Bitte den Ersatz-Buchstaben eingeben: ? ";
    cin >> E;

    for (int i = 0; i < S.length(); ++i)
        if (S[i] == T)
            S[i] = E;
    cout << "Der Text nach der Ersetzung: " << S << endl;
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