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
int pos = 0;
string eingabe[N];
void Init()
{
    bool flag = 1;
    while (flag && pos < 5)
    {
        cout << "Eingabezeile = ? ";
        getline(cin, eingabe[pos]);
        if (eingabe[pos].length() == 0)
            flag = 0;
        else
            pos++;
    }
}

void Solve()
{
    for (int i = 0; i < pos; ++i)
    {
        for (int j = 0; j < eingabe[i].length(); ++j)
            if (eingabe[i][j] != ' ' && eingabe[i][j - 1] == ' ')
                cout << endl
                     << eingabe[i][j];
            else if (eingabe[i][j] != ' ')
                cout << eingabe[i][j]; 
        cout << endl;
    } cout << "Der Umfang des Quadrats betraegt (in cm) : " << (double) umfang << endl;
}

int main()
{
    Init();
    Solve();
    system("PAUSE");
    return 0;
}