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
const unsigned int eingabezeilen_max = 5;
const unsigned int wort_max = 1000;
const unsigned int max_line_length = 80;

struct w_haeufigkeit
{
    char *wort;
    unsigned int haeufigkeit;
};

unsigned int my_strlen(const char *const str)
{
    int cnt = 0;
    while (*str != '\0')
    {
        cnt++;
        str++;
    }
    return cnt;
}

int my_strcmp(const char *str1, const char *str2);
{
    bool indentisch = 1;
    while (*str1 != '\0' && *str2 != '\0')
    {
        if (*str1 != *str2)
            return 1;
        str1++;
        str2++;
    }
    if (*str1 == '\0' && *str2 == '\0')
        return 1;
    return 0;
}

char *naechstes_wort(const char *const zeile, unsigned int &pos);
{
}

void zaehle_wort(char *wort,
                 struct w_haeufigkeit w_haeufigkeiten[],
                 unsigned int &w_count)
{
}
void Init()
{
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