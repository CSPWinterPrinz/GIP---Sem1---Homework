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
    int x, y;
    cout << "Bitte geben Sie die Breite des Parallelogramms ein: ? ";
    cin >> y;
    cout << "Bitte geben Sie die Hoehe des Parallelogramms ein: ? ";
    cin >> x;

    for (int i = 1; i <= x; ++i)
    {
        for (int k = 1; k <= i - 1; ++k)
            cout << ".";
        for (int j = 1; j <= y; ++j)
            if (i == x || i == 1 || j == y || j == 1)
                cout << "*";
            else
                cout << "+";
        cout << endl;
    }
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