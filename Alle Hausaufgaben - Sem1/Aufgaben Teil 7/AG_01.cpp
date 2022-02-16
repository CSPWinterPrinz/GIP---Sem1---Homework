#include <iostream>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string.h>
using namespace std;

//-----------------------------------------------------

int main()
{
    int pos = 0, Lang = -1;
    string eingabe[100];
    bool flag = 1;
    while (flag && pos < 4)
    {
        cout << "Textzeile = ? ";
        getline(cin, eingabe[pos]);
        if (eingabe[pos].length() == 0)
            flag = 0;
        else
        {
            Lang = max(Lang, (int)eingabe[pos].length());
            pos++;
        }
    }
    for (int i = 0; i < pos; ++i)
    {
        for (int j = 1; j <= Lang - eingabe[i].length(); ++j)
            cout << "#";
        cout << eingabe[i] << endl;
    }
    system("PAUSE");
    return 0;
}