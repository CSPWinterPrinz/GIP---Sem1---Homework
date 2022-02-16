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

struct Person
{
    string nachname, vorname;
    int alter;
    char geschlecht;
};

void filter(Person Personen[100], int anzahl)
{
    int auswahl, Sum = 0;
    cout << "Ihre Auswahl:\n"
         << "1 - Weibliche Erwachsene\n2 - Maennliche Erwachsene\n3 - Weibliche Kinder\n4 - Maennliche Kinder\n"
         << "? ";
    cin >> auswahl;
    for (int i = 0; i < anzahl; ++i)
        if (auswahl == 1 && Personen[i].alter >= 18 && Personen[i].geschlecht == 'w' || auswahl == 2 && Personen[i].alter >= 18 && Personen[i].geschlecht == 'm' || auswahl == 3 && Personen[i].alter < 18 && Personen[i].geschlecht == 'w' || auswahl == 4 && Personen[i].alter < 18 && Personen[i].geschlecht == 'm')
            cout << Personen[i].nachname << ", " << Personen[i].vorname << ", " << Personen[i].geschlecht << ", " << Personen[i].alter << endl, Sum++;
    cout << "Summe: " << Sum << endl;
}

int main()
{
    /*
    Person personen[100];
    int anzahl_personen = 0;

    */
    Person personen[100] = {
        {"Musterfrau1", "Petra1", 18, 'w'},
        {"Mustermann1", "Klaus1", 18, 'm'},
        {"Mustermaedchen1", "Lisa1", 1, 'w'},
        {"Musterjunge1", "Jan1", 1, 'm'},
        {"Musterfrau2", "Petra2", 19, 'w'},
        {"Mustermann2", "Klaus2", 19, 'm'},
        {"Mustermaedchen2", "Lisa2", 2, 'w'},
        {"Musterjunge2", "Jan2", 2, 'm'},
        {"Musterfrau3", "Petra3", 20, 'w'},
        {"Mustermann3", "Klaus3", 20, 'm'},
        {"Mustermaedchen3", "Lisa3", 3, 'w'},
        {"Musterjunge3", "Jan3", 3, 'm'},
        {"Musterfrau4", "Petra4", 21, 'w'},
        {"Mustermann4", "Klaus4", 21, 'm'},
        {"Mustermaedchen4", "Lisa4", 4, 'w'},
        {"Musterjunge4", "Jan4", 4, 'm'},
        {"Musterfrau5", "Petra5", 22, 'w'},
        {"Mustermann5", "Klaus5", 22, 'm'},
        {"Mustermaedchen5", "Lisa5", 5, 'w'},
        {"Musterjunge5", "Jan5", 5, 'm'},
        {"Musterfrau6", "Petra6", 23, 'w'},
        {"Mustermann6", "Klaus6", 23, 'm'},
        {"Mustermaedchen6", "Lisa6", 6, 'w'},
        {"Musterjunge6", "Jan6", 6, 'm'},
        {"Musterfrau7", "Petra7", 24, 'w'},
        {"Mustermann7", "Klaus7", 24, 'm'},
        {"Mustermaedchen7", "Lisa7", 7, 'w'},
        {"Musterjunge7", "Jan7", 7, 'm'},
        {"Musterfrau8", "Petra8", 25, 'w'},
        {"Mustermann8", "Klaus8", 25, 'm'},
        {"Mustermaedchen8", "Lisa8", 8, 'w'},
        {"Musterjunge8", "Jan8", 8, 'm'}};
    int anzahl_personen = 32;

    char eingabe = 'a';
    while (true)
    {
        cout << "Eine weitere Person eingeben (j/n)? ";
        cin >> eingabe;
        if (eingabe == 'n')
            break;
        anzahl_personen++;
        cout << "Bitte den Nachnamen der " << anzahl_personen << ". Person eingeben: ? ";
        cin >> personen[anzahl_personen - 1].nachname;
        cout << "Bitte den Vornamen der " << anzahl_personen << ". Person eingeben: ? ";
        cin >> personen[anzahl_personen - 1].vorname;
        cout << "Bitte das Alter der " << anzahl_personen << ". Person eingeben: ? ";
        cin >> personen[anzahl_personen - 1].alter;
        cout << "Bitte das Geschlecht der " << anzahl_personen << ". Person eingeben: ? ";
        cin >> personen[anzahl_personen - 1].geschlecht;
    }
    filter(personen, anzahl_personen);
    system("PAUSE");
    return 0;
}
