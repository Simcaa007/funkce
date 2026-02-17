// 03.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

using namespace std;

bool jeSude(int n);
int soucet(int n);
int prumer(int n);

int main()
{
	int n;
	cout << "Zadejte cele kladne cislo n: ";
	cin >> n;

	if (jeSude) {
		cout << "Cislo je sude juhu!! A soucet jeho lichych delitelu je: " << soucet(n) << " a prumer sudych delitelu je: " << prumer(n) << endl;
	}
	else {
		cout << "Ne cislo neni sude bro";
	}
}

bool jeSude(int n) {
	if (n % 2 == 0) {
		return true;
	}
	return false;
}

int soucet(int n) {
	int soucet = 0;
	if(jeSude){
		for (int i = 1; i < n; i += 2) {
			if (n % i == 0) {
				soucet += i;
			}
		}
	}
	return soucet;
}

int prumer(int n) {
	int soucet = 0;
	int pocet = 0;
	if (jeSude) {
		for (int i = 2; i <= n; i += 2) {
			if (n % i == 0) {
				soucet += i;
				pocet++;
			}
		}
	}
	double p = soucet / pocet;
	return p;
}