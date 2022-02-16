#include <iostream>
#include <string>

char *my_strconcat(const char *ptr1, const char *ptr2);

int main()
{
    std::cout << "Bitte ersten Text eingeben (ggfs. mit Leerzeichen): ? ";
    std::string s1;
    std::getline(std::cin, s1);

    std::cout << "Bitte zweiten Text eingeben (ggfs. mit Leerzeichen): ? ";
    std::string s2;
    std::getline(std::cin, s2);

    std::cout << "Ergebnis my_strconcat(): " << my_strconcat(s1.data(), s2.data()) << std::endl;

    return 0;
}

std::size_t cstrlen(const char *str)
{
    std::size_t s;
    for (s = 0; str[s] != 0; ++s)
        ;
    return s;
}

char *my_strconcat(const char *ptr1, const char *ptr2)
{
    char *res = new char[cstrlen(ptr1) + cstrlen(ptr2) + 1];
    std::size_t i;
    for (i = 0; ptr1[i] != 0; ++i)
    {
        res[i] = ptr1[i];
    }

    for (std::size_t k = 0; ptr2[k] != 0; ++k)
    {
        res[i + k] = ptr2[k];
    }

    res[cstrlen(ptr1) + cstrlen(ptr2)] = 0;
    return res;
}
/*#include <iostream>
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

char *my_strconcat(const char *ptr1, const char *ptr2)
{
    char *res = new char[40];
    int cnt = 0;
    while (*ptr1 != '\0')
    {
        res[cnt] = *ptr1;
        cnt++;
        ptr1++;
    }
    while (*ptr2 != '\0')
    {
        res[cnt] = *ptr2;
        cnt++;
        ptr2++;
    }
    return res;
}

void Init()
{
    char text[20], text2[20];
    cout << "Bitte ersten Text eingeben (ggfs. mit Leerzeichen): ? ";
    cin.getline(text, 20);
    cout << "Bitte zweiten Text eingeben (ggfs. mit Leerzeichen): ? ";
    cin.getline(text2, 20);

    cout << "Ergebnis my_strconcat(): ";
    char *ans;
    ans = my_strconcat(text, text2);

    for (int i = 0; *(ans + i - 1) != '\0'; i++)
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
}*/