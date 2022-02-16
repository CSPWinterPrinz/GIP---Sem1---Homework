#include <iostream>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <cstdio>
using namespace std;

//-----------------------------------------------------

void spalte_ab_erstem(char zeichen,
                      string eingabe,
                      string &erster_teil,
                      string &zweiter_teil)
{
    bool flag = false;
    for (int i = 0; i < eingabe.length(); ++i)
    {
        if (!flag && eingabe[i] == zeichen)
        {
            flag = true;
            continue;
        }
        if (!flag)
            erster_teil += eingabe[i];
        else
            zweiter_teil += eingabe[i];
    }
}

int main()
{
    const int oo = 1000000000;
    const long long N = 1000;
    string eingabe1 = "", S1 = "", S2 = "", S = "";
    char zeichen1 = 'a';
    cout << "Bitte geben Sie die einzeilige Zeichenkette ein: ? ";
    getline(cin, eingabe1);

    cout << "Bitte geben Sie das Zeichen ein: ? ";
    cin >> zeichen1;
    S1 = "";
    S2 = "";
    spalte_ab_erstem(zeichen1, eingabe1, S1, S2);
    cout << "Der erste Teil der Zeichenkette lautet: " << S1 << endl;
    cout << "Der zweite Teil der Zeichenkette lautet: " << S2 << endl;

    system("PAUSE");
    return 0;
}