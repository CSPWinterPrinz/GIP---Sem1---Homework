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

void Init()
{
    for (int z = 1, wert2 = 10, wert3 = 10; z <= 10; ++z, wert2 *= 2, wert3 *= 3)
    {
        cout << "Zeile: " << z
             << " Verdoppler: " << wert2
             << " Verdreifacher: " << wert3
             << endl;
    }
}

void Solve()
{
}

int main()
{
    Init();
    Solve();
}