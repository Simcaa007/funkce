// 06.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include "funkce.h"

using namespace std;

int main()
{
    int prvni; int druhy; int n;
    cout << "zadej prvni clen posloupnosti: "; cin >> prvni;
    cout << "zadej druhy clen posloupnosti: "; cin >> druhy;
    cout << "kolikaty prvek to chceme? a nasledne tolik prvku soucet.."; cin >> n;

    cout << prvek(prvni, druhy, n) << " to je ten prvek baby a soucet vsech tech prvku do n je: " << soucet(prvni, druhy, n) << endl;

}
