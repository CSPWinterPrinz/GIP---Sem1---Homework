#include <iostream>
using namespace std;

int main()
{
    double seitenlaenge = 0.0;
    double umfang = 0.0;
    double flaeche = 0.0;

    cout << "Bitte geben Sie die Seitenlaenge ein (in cm): "
         << "?"
         << " ";
    cin >> seitenlaenge;

    umfang = (double)(seitenlaenge * 4);
    flaeche = (double)(seitenlaenge * seitenlaenge);

    cout << "Der Umfang des Quadrats betraegt (in cm): " << umfang << endl;

    cout << "Die Flaeche des Quadrats betraegt (in cm*cm): " << flaeche << endl;

    system("PAUSE");
    return 0;
}