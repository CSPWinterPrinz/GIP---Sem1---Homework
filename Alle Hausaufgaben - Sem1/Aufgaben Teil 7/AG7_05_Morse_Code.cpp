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

struct T_Morse_Data
{
    char letter;
    std::string morse_code;
};
const T_Morse_Data morse_data[] = {
    {'a', ".-"},
    {'b', "-..."},
    {'c', "-.-."},
    {'d', "-.."},
    {'e', "."},
    {'f', "..-."},
    {'g', "--."},
    {'h', "...."},
    {'i', ".."},
    {'j', ".---"},
    {'k', "-.-"},
    {'l', ".-.."},
    {'m', "--"},
    {'n', "-."},
    {'o', "---"},
    {'p', ".--."},
    {'q', "--.-"},
    {'r', ".-."},
    {'s', "..."},
    {'t', "-"},
    {'u', "..-"},
    {'v', "...-"},
    {'w', ".--"},
    {'x', "-..-"},
    {'y', "-.--"},
    {'z', "--.."},
    {'0', "-----"},
    {'1', ".----"},
    {'2', "..---"},
    {'3', "...--"},
    {'4', "....-"},
    {'5', "....."},
    {'6', "-...."},
    {'7', "--..."},
    {'8', "---.."},
    {'9', "----."},
    // Leerzeichen zur Worttrennung werden im Morsecode
    // durch einen Slash '/' umgeben von Leerzeichen
    // dargestellt ...
    // (Alternative: Trennung durch 3 Leerzeichen)
    // Hier bei uns, um die Testläufe eindeutiger zu
    // machen: Trennung mittels drei Slashes
    {' ', "///"},
    {'.', ".-.-.-"},
    {',', "--..--"},
    {':', "---..."},
    {'?', "..--.."},
    {'-', "-....-"},
    {'/', "-..-."},
    {'@', ".--.-."},
    {'=', "-...-"}};
const int morse_data_len = 45;

int main()
{
    string eingabe;
    cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
    getline(cin, eingabe);

    for (int i = 0; i < eingabe.length(); ++i)
    {
        if (isupper(eingabe.at(i)))
            eingabe[i] = (char)eingabe[i] + 32;
        for (int morse = 0; morse < morse_data_len; ++morse)
            if (eingabe[i] == morse_data[morse].letter)
                cout << morse_data[morse].morse_code;
        cout << '#';
    }
    cout << endl;
    system("PAUSE");
    return 0;
}