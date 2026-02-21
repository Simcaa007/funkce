// 09.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

using namespace std;

bool stejnaPolorovina(int xa, int xb);
bool stejnyKvadrant(int xa, int ya, int xb, int yb);

int main()
{
    int xa; int ya; int xb; int yb;

    cout << "Zadej souradnice bodu A [x;y], nejdrive x:"; cin >> xa;
    cout << "Zadej souradnice bodu A [x;y], ted y:"; cin >> ya;
    cout << "Zadej souradnice bodu B [x;y], ted x:"; cin >> xb;
    cout << "Zadej souradnice bodu B [x;y], ted y:"; cin >> yb;

    if (stejnaPolorovina(xa, xb)) {
        cout << "Ano, oba body jsou v jedne polorovine" << endl;
    }
    else cout << "Ne, body se nenachazi na stejne polorovine" << endl;

	if (stejnyKvadrant(xa, ya, xb, yb)) {
		cout << "Ano, oba body jsou ve stejnem kvadrantu" << endl;
	}
	else cout << "Ne, body se nenachazi ve stejnem kvadrantu" << endl;
}

bool stejnaPolorovina(int xa, int xb)
{
    if (xa > 0 && xb > 0 || xa < 0 && xb < 0) return true;
    else return false;
}

bool stejnyKvadrant(int xa, int ya, int xb, int yb)
{
    if (stejnaPolorovina(xa, xb) && (ya < 0 && yb < 0 || ya > 0 && yb >0)) {
        return true;
    }
    else return false;
}