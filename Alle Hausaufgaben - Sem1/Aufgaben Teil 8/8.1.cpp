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

unsigned int my_strlen(const char* ptr) {
    int len = 0;
    while (*ptr != '\0') {
        len++;
        ptr++;
    }
    return len;
}

void Init()
{
    char text[20];
    cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
    cin.getline(text, 20);
    cout << "Ergebnis my_strlen(): " << my_strlen(text) << endl;
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