// 04.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

using namespace std;

double diskriminant(double a, double b, double c);
void koreny(double dis, double a, double b, double x1, double x2);

int main()
{
	double a, b, c;
	double x1 = 0; double x2 = 0;
	cout << "zadejte a v kvadraticke rovnici: "; cin >> a;
	cout << "zadejte b v kvadraticke rovnici: "; cin >> b;
	cout << "zadejte c v kvadraticke rovnici: "; cin >> c;

	double dis = diskriminant(a, b, c);
	koreny(dis, a, b, x1, x2);
	cout << "koren rovnice x1 je: " << x1 << " a koren druhy x2 je: " << x2 << endl;

}

double diskriminant(double a, double b, double c) {
	double vys = (b * b) - 4 * a * c;
	return vys;
}

void koreny(double dis, double a, double b, double x1, double x2) {
	double odmocnina = sqrt(dis);
	x1 = (-b + odmocnina) / (2 * a);
	x2 = (-b - odmocnina) / (2 * a);
}