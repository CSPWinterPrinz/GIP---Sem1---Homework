#include <iostream>
#include <string>
using namespace std;
struct w_haeufigkeit
{
    string wort;
    int haeufigkeit;
};
bool Sonderzeichen(char x)
{
    return !((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'));
}
string naechstes_wort(string zeile, int &pos)
{
    if (pos >= zeile.length() - 1)
        return "";
    int anf = pos;
    for (int i = anf; i < zeile.length(); ++i)
        if (!Sonderzeichen(zeile[i]))
        {
            anf = i;
            break;
        }

    for (int i = anf; i < zeile.length(); ++i)
        if (Sonderzeichen(zeile[i]))
        {
            pos = i;
            break;
        }
    //cout << anf << " " << pos << endl;
    if (anf == pos)
        return "";
    return zeile.substr(anf, pos - anf);
}
void zaehle_wort(string wort, w_haeufigkeit haeufigkeiten[], int &w_count)
{
    bool appeared = 0;
    for (int i = 0; i < w_count; ++i)
    {
        if (haeufigkeiten[i].wort == wort)
        {
            haeufigkeiten[i].haeufigkeit++;
            appeared = 1;
            break;
        }
    }
    if (!appeared)
    {
        haeufigkeiten[w_count].wort = wort;
        haeufigkeiten[w_count].haeufigkeit = 1;
        w_count++;
    }
}
int main()
{
    int z_count = 0, w_count = 0;
    string wort = "";
    string eingabe[5];
    bool flag = 1;
    while (flag && z_count < 5)
    {
        cout << "Eingabezeile = ? ";
        getline(cin, eingabe[z_count]);
        if (eingabe[z_count].length() == 0)
            flag = 0;
        else
        {
            eingabe[z_count] += '!';
            z_count++;
        }
    }

    {
        w_haeufigkeit haeufigkeiten[1000];
        for (int k = 0; k < z_count; k++)
        {
            int pos = 0;
            while (true)
            {
                wort = naechstes_wort(eingabe[k], pos);
                if (wort == "")
                    break;
                zaehle_wort(wort, haeufigkeiten, w_count);
            }
        }
        for (int k = 0; k < w_count; k++)
            cout << haeufigkeiten[k].wort << ": "
                 << haeufigkeiten[k].haeufigkeit << endl;
        system("PAUSE");
        return 0;
    }
}
