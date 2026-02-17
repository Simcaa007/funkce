// 02.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

using namespace std;

int mocnina(int a, int n);
int soucet(int n);


int main()
{
    int volba;

    do {
        cout << "Zadejte volbu programu 1(mocnina), 2(ciferny soucet),3(konec)";
        cin >> volba;

        switch (volba)
        {
        case 1: {
            int a, n;
            cout << "zadejte cele cislo a: ";
            cin >> a;
            cout << "zadejte cele nezaporne cislo n: "; 
            cin >> n;
            cout << mocnina(a, n) << endl;

        }break;
        case 2: {
            int n;
            cout << "Zadejte cele nezaporne cislo n: ";
            cin >> n;
            cout << "Ciferny soucet cisla je: " << soucet(n) << endl;
        }break;

        case 3: {
            cout << "Konec programu!!!" << endl;
        }break;

        
        default:cout << "Bylo zadano neco spatneho bro...";
            break;
        }

    } while (volba != 3);
}

int mocnina(int a, int n) {
    int mocnina = 1;
    for (int i = 0; i < n; i++) {
        mocnina *= a;
    }

    return mocnina;
}

int soucet(int n) {
    int soucet = 0;
    while (n > 0) {
        soucet += n % 10;
        n = n / 10;
    }
    return soucet;
}