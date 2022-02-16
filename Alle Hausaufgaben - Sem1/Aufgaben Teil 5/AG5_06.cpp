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
    int a[N], Min = oo, Max = -oo;
    for (int i = 0; i < 5; ++i)
    {
        cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
        cin >> a[i];
        if (a[i] > Max)
            Max = a[i];
        if (a[i] < Min)
            Min = a[i];
    }
    for (int i = 0; i < 5; ++i)
        cout << "Die " << i + 1 << ". eingegebene Zahl lautete: " << a[i] << endl;

    cout << "Die kleinste eingegebene Zahl lautete: " << Min << endl;
    cout << "Die groesste eingegebene Zahl lautete: " << Max << endl;
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