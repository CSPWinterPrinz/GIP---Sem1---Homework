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
    cout << "Der Text nach der Umwandlung: ";

    for (int i = 0; i < S.length(); ++i)
    {
        if (S[i] >= 'a' && S[i] <= 'z')
            cout << S[i] << S[i];
        else if (S[i] >= 'A' && S[i] <= 'Z')
            cout << S[i] << S[i] << S[i];
        else if (S[i] == ' ')
            cout << '_';
        else if (S[i] >= '0' && S[i] <= '9')
            cout << ".";
        else if (S[i] == '!' || S[i] == '?')
            cout << "";
        else
            cout << S[i];
    }
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