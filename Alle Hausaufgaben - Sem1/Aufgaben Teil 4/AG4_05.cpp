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
    cout << "Bitte einzeiligen Text eingeben (ohne Leerzeichen): ? ";
    cin >> S;
    //cin.ignore();
    for (int i = 0; i < S.length(); ++i)
        cout << "Position: " << i << " Buchstabe: " << S[i] << endl;
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