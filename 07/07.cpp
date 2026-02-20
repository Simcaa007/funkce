// 07.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include "funkce.h"
using namespace std;

int main()
{
    int prvni; int druhy; int n;
    cout << "zadej prvni prvek gp:"; cin >> prvni;
    cout << "zadej druhy prvek gp:"; cin >> druhy;
    cout << "a jeste zadej n prosim te: "; cin >> n;

    cout << "takze prvecek je: " << prvek(prvni, druhy, n) << endl;

}