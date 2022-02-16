#include <iostream>
#include <string>
using namespace std;

void charersetzten(string text, char eingabe, int &pos)
{
    char zeichen = '*';

    if (eingabe == 'r')
    {          // ! z.B pos hier = length() - 1
        pos++; // ! Dann ist es hier gleich length()
        if (pos == text.length())
            pos = pos - text.length();

        text.at(pos) = zeichen; // ! Wenn du kein "if" bevor diese Zeil hast, dann hier gibts kein text.at(length()) => Out of range!!!.
        cout << text << endl;
    }
    if (eingabe == 'l') // * mit 'l' Befehl funktioniert es besser!
    {                   // ! aber sowieso hast noch paar Fehler
        pos--;          // * hier hast du gut gemacht. pos-- dann if =))
                        /* 
        if (pos == 0)   // pos == 0 liegt in gleiche Situation mit pos > 0
        {
            pos = (text.length() - 1);
            text.at(pos) = zeichen;

            cout << text << endl;
        }
        else */
        if (pos >= 0)
        {
            text.at(pos) = zeichen; // !Hier soll es nur pos sein, weil du hast schon -1, nix pos - 1
            cout << text << endl;
        }

        else if (pos < 0)
        {
            pos = (text.length() - 1);
            text.at(pos) = zeichen;
            cout << text << endl;
        }
    }
}

int main()
{
    string text = "";

    cout << "Bitte geben Sie den Text ein : ? ";
    getline(cin, text);
    const string satz = text;
    char eingabe = 0;
    cout << '*';
    for (int i = 1; i < text.length(); ++i)
        cout << text[i];
    cout << endl;
    cout << "l: links, r : rechts, q : quit.Ihre Engabe : ? ";
    cin >> eingabe;
    int pos = 0;
    while (eingabe == 'r' || eingabe == 'l')
    {

        //for (int pos = 0; pos < text.length(); pos++)
        {
            charersetzten(satz, eingabe, pos);
            cin >> eingabe;
        }
    }
    /*
    while (eingabe == 'q')
    {
        break;
    }
*/
    system("PAUSE");
    return 0;
}
