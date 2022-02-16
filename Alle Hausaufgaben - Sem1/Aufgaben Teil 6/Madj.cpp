#include <iostream>
#include <string>
using namespace std;

void spalte_ab_erstem(char zeichen,
                      string eingabe,
                      string &erster_teil,
                      string &zweiter_teil);

int main()
{

    string eingabe = "", erster_teil = "", zweiter_teil = "";
    cout << "Bitte geben Sie die einzeilige Zeichenkette ein: ? ";
    getline(cin, eingabe);

    char zeichen = 'a';
    cout << "Bitte geben Sie das Zeichen ein: ? ";
    cin >> zeichen;

    spalte_ab_erstem(zeichen, eingabe, erster_teil, zweiter_teil);

    cout << "Der erste Teil der Zeichenkette lautet: " << erster_teil << endl;
    cout << "Der zweite Teil der Zeichenkette lautet: " << zweiter_teil << endl;
    system("PAUSE");
    return 0;
}

void spalte_ab_erstem(char zeichen,
                      string eingabe,
                      string &erster_teil,
                      string &zweiter_teil)
{
    int length = eingabe.length();
    int i;
    bool erst = true;
    for (i = 0; i < length; i++)
    {
        if (eingabe.at(i) == zeichen && erst)
        {
            erst = false;
            continue;
        }
        if (erst)
        {
            erster_teil += eingabe.at(i);
        }
        else
        {
            zweiter_teil += eingabe.at(i);
        }
    }
}