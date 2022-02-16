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

int my_strcmp(const char *ptr1, const char *ptr2)
{
    int len1 = 0, len2 = 0;
    while (*ptr1 != '\0' || *ptr2 != '\0')
    {
        if (*ptr1 != *ptr2)
            return (*ptr1 < *ptr2 ? -1 : 1);
        ptr1++;
        ptr2++;
        len1++;
        len2++;
    }
    if (len1 == len2)
        return 0;
    return (len1 < len2 ? -1 : 1);
}

void Init()
{
    char text[20], text2[20];

    cout << "Bitte ersten Text eingeben (ggfs. mit Leerzeichen): ? ";
    cin.getline(text, 20);
    cout << "Bitte zweiten Text eingeben (ggfs. mit Leerzeichen): ? ";
    cin.getline(text2, 20);

    if (my_strcmp(text, text2) == 0)
        cout << "Die Texte sind identisch. Ergebnis my_strcmp(): 0" << endl;
    else
        cout << "Ergebnis my_strcmp(): " << my_strcmp(text, text2) << endl;
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