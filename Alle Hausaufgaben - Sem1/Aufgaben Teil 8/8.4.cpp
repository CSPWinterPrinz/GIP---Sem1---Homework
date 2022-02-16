#include <iostream>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string>
using namespace std;

//-----------------------------------------------------
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const int oo = 1000000000;
const long long N = 1000;
char res[40];
char *my_strconcat2(const char *sptr1, const char *sptr2, unsigned int count)
{
    int cnt = 0;
    while (*sptr1 != '\0') // || cnt > count)
    {
        res[cnt] = *sptr1;
        cnt++;
        sptr1++;
    }
    while (*sptr2 != '\0') // || cnt > count)
    {
        res[cnt] = *sptr2;
        cnt++;
        sptr2++;
    }
    return res;
}

void Init()
{
    char text[20], text2[20];
    int Zahl = 0;
    cout << "Bitte esrten Text eingeben (ggfs. mit Leerzeichen): ? ";
    cin.getline(text, 20);
    cout << "Bitte zweiten Text eingeben (ggfs. mit Leerzeichen): ? ";
    cin.getline(text2, 20);
    cout << "Anzahl Zeichen: ? ";

    cin >> Zahl;
    cout << "Ergebnis my_strconcat2(): ";
    char *ans;
    ans = my_strconcat2(text, text2, Zahl);
    for (int i = 0; i < Zahl && *(ans + i) != '\0'; i++)
        cout << *(ans + i);
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