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
    char T;
    cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
    getline(cin, S);
    cout << "Bitte Buchstaben eingeben: ? ";
    cin.get(T);
    for (int i = S.length() - 1; i >= 0; --i)
        if (S[i] == T)
            ++cnt;
    cout << "Der Buchstabe " << T << " kommt " << cnt << " mal im Text vor." << endl;
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