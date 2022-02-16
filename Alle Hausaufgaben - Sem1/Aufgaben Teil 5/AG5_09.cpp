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

string trimme(string s)
{
    int Anf, End;
    for (int i = 0; i < s.length(); ++i)
        if (s[i] != '+')
        {
            Anf = i;
            break;
        }
    for (int i = s.length() - 1; i >= 0; --i)
        if (s[i] != '+')
        {
            End = i;
            break;
        }
    string ans;
    for (int i = Anf; i <= End; ++i)
        ans += s[i];
    return ans;
}

int main()
{
    string s = "";
    cout << "Bitte geben Sie die Textzeile ein: ? ";
    getline(cin, s);
    cout << "Vorher: " << s << endl;
    cout << "Nachher: " << trimme(s) << endl;
    system("PAUSE");
    return 0;
}