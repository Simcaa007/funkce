// 10.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include <string>

using namespace std;

string dokonalaCisla(int a, int b);

int main()
{
    int a, b;

    cout << "Zadej cele kladne cislo a: "; cin >> a;
    cout << "Zadej cele kladne cislo b: "; cin >> b;

	cout << "Dokonala cisla z rozmezi jsou: " << dokonalaCisla(a, b) << endl;
	return 0;
}


string dokonalaCisla(int a, int b) {
	
    string vysledek = "";

	for (int i = a; i <= b; i++) {
		int cislo = i;
		int soucet = 0;
		for (int j = 1; j < cislo; j++) {
			if (cislo % j == 0) {
				soucet += j;
			}
		}

		if (soucet == cislo && cislo != 0) {
			vysledek += to_string(cislo) + "; ";
		}
	}
	return vysledek;
}