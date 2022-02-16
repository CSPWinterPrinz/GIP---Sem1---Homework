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

bool Palin(string X, int Anf, int End)
{
    if (Anf >= End)
        return X[Anf] == X[End];
    return (X[Anf] == X[End] && Palin(X, Anf + 1, End - 1));
}
void Init()
{
    string S;
    bool piv = false;
    while (!piv)
    {
        piv = true;
        cout << "Text: ? ";
        getline(cin, S);
        for (int i = 0; i < S.length(); ++i)
            if (S[i] < 'a' || S[i] > 'z')
                piv = false;
    }

    cout << (Palin(S, 0, S.length() - 1) ? "Das eingegebene Wort ist ein Palindrom.\n" : "Das eingegebene Wort ist KEIN Palindrom.\n");
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