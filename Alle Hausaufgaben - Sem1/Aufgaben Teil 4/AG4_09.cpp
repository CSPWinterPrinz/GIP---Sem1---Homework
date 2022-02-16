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
    int pos = -1;
    char T;
    cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
    getline(cin, S);
    cout << "Bitte Buchstaben eingeben: ? ";
    cin >> T;
    for (int i = S.length() - 1; i >= 0; --i)
        if (S[i] == T)
        {
            pos = i;
            break;
        }
    if (pos == -1)
        cout << "Der Buchstabe " << T << " kommt nicht im Text vor." << endl;
    else
        cout << "Der Buchstabe " << T << " kommt im Text vor, an Position " << pos << "." << endl;
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