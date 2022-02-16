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

bool Palin(string S, int Anf, int End)
{
    if (Anf >= End)
        return S[Anf] == S[End];
    return (S[Anf] == S[End] && Palin(S, Anf + 1, End - 1));
}

void Init()
{
    string X;
    cout << "Bitte geben Sie die Zeichenkette (6 Zeichen) ein: ? ";
    //getline(cin, X);
    cin >> X;
    cout << (Palin(X, 0, X.length() - 1) ? "Das eingegebene Wort ist ein Palindrom.\n" : "Das eingegebene Wort ist KEIN Palindrom.\n");
}

void Solve()
{
}

int main()
{
    Init();
    Solve();
}