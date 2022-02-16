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

int addition_rekursiv(int i, int k)
{
    if (k == 0)
        return i;
    return addition_rekursiv(i + 1, k - 1);
}
int subtraktion_rekursiv(int i, int k)
{
    if (k == 0)
        return i;
    return subtraktion_rekursiv(i - 1, k - 1);
}

int main()
{
    int i = 0, k = 0;
    cout << "Bitte geben Sie die erste Zahl ein: ? ";
    cin >> i;
    cout << "Bitte geben Sie die zweite Zahl ein: ? ";
    cin >> k;
    cout << i << " + " << k << " = "
         << addition_rekursiv(i, k) << endl;
    cout << i << " - " << k << " = "
         << subtraktion_rekursiv(i, k) << endl;
    system("PAUSE");
    return 0;
}