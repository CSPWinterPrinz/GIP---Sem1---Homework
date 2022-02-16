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

void Init()
{
    int a[N] = {1, 2, 2, 4, 5, 6};
    int Mark[10] = {0};
    for (int i = 0; i < 6; ++i)
        Mark[a[i]]++;
    for (int i = 0; i < 7; ++i)
        cout << i << " hat " << Mark[i] << " Mals erscheint." << endl;
    for (int i = 0, zeile = 0; i < 9; ++i, zeile += ((i % 3 == 2) ? 1 : 0))
        cout << i << " " << zeile << endl;
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