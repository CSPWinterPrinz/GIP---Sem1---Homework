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
const long long N = 1000;

string ersetze(string zeile,
               char zu_ersetzendes_zeichen,
               string ersatztext)
{
    string ans;
    for (int i = 0; i < zeile.length(); ++i)
        if (zeile[i] == zu_ersetzendes_zeichen)
            ans += ersatztext;
        else
            ans += zeile[i];
    return ans;
}

int main()
{
    string s1 = "", s2 = "";
    char c;
    cout << "Bitte geben Sie die Textzeile ein: ? ";
    getline(cin, s1);
    cout << "Bitte geben Sie das zu ersetzende Zeichen ein: ? ";
    cin >> c;
    cin.ignore();
    cout << "Bitte geben Sie den einzusetzenden Text ein: ? ";
    getline(cin, s2);
    cout << "Ergebnis: " << ersetze(s1, c, s2) << endl;
    system("PAUSE");
    return 0;
}