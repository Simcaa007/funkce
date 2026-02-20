// 08.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

using namespace std;

void jePrvocislo(int n);

int main()
{
    int n;
    cout << "Zadej cele kladne cislo n:"; cin >> n;

	jePrvocislo(n);
	return 0;
}

void jePrvocislo(int n)
{
	bool prvocislo = true;
	int min = RAND_MAX;
	int max = 0;

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0 && prvocislo) {
			prvocislo = false;
			min = i;
		}

		if (n % i == 0) {
			max = i;
		}
	}

	if (prvocislo) {
		cout << "Dane cislo je prvocislo." << endl;
	}
	else {
		cout << "Cislo neni prvocislo" << endl;
		cout << "A tedy nejmensiho delitele ma: " << min << endl;
		cout << "A nejvetsiho delitele ma: " << max << endl;
	}
}