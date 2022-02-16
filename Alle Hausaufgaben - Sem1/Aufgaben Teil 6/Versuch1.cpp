#include <iostream>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <cstdio>
using namespace std;

//-----------------------------------------------------
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const int oo = 1000000000;
const long long N = 1000;

void spalte_ab_erstem(char zeichen,
                      string eingabe,
                      string &erster_teil,
                      string &zweiter_teil)
{
    int pos = -1;
    for (int i = 0; i < eingabe.length(); ++i)
        if (eingabe[i] == zeichen)
        {
            pos = i;
            break;
        }
    if (pos != -1)
    {
        erster_teil = "";
        for (int i = 0; i < pos; ++i)
            erster_teil += eingabe[i];
        for (int i = pos + 1; i < eingabe.length(); ++i)
            zweiter_teil += eingabe[i];
    }
}

int main()
{
    string eingabe1, S1, S2, S;
    char zeichen1;
    cout << "Bitte geben Sie die einzeilige Zeichenkette ein: ? ";
    getline(cin, eingabe1);
    cout << "Bitte geben Sie das Zeichen ein: ? ";
    //zeichen1 = getchar();
    cin >> zeichen1;
    S1 = eingabe1;
    S2 = "";
    spalte_ab_erstem(zeichen1, eingabe1, S1, S2);

    cout << "Der erste Teil der Zeichenkette lautet: " << S1 << endl;
    cout << "Der zweite Teil der Zeichenkette lautet: " << S2 << endl;

    system("PAUSE");
    return 0;
}