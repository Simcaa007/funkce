// 05.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

using namespace std;

void jeLiche(int n, double prumer, int pocetS);

int main()
{
    cout << "Zadejte cele klande cislo n: ";
    int n; cin >> n;
    double prumer = 1; int pocetS = 0;

    jeLiche(n, prumer, pocetS);

}

void jeLiche(int n, double prumer, int pocetS) {
    int soucet = 0;
    int pocetL = 0;
    int N = n;
    while (N > 0) {
        int cifra = N % 10;
        N = N / 10;

        if (cifra % 2 != 0) {
            soucet += cifra;
            pocetL++;
        }
        else {
            pocetS++;
        }

    }
    prumer = (double)soucet / pocetL;

    if (n % 2 != 0) {
        cout << "Zadane cislo je liche a prumer lichych cifer je: " << prumer << " a pocet sudych cifer je: " << pocetS << endl;
    }
    else cout << "Zadane cislo neni liche a prumer lichych cifer je: " << prumer << " a pocet sudych cifer je: " << pocetS << endl;


}
