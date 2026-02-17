// 02.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

using namespace std;

int main()
{
    int volba;
    cout << "Zadejte volbu programu 1(mocnina), 2(ciferny soucet),3(konec)";

    do {
        cin >> volba;

        switch (volba)
        {
        case 1: {
            int a, n;
            cout << "zadejte cele cislo a: ";
            cin >> a;
            cout << "zadejte cele nezaporne cislo n: ";
            cin >> n;
            int mocnina = 1;
            for (int i = 0; i < n; i++) {
                mocnina *= a;
            }
            cout << "mocnina je: " << mocnina << endl;

        }break;
        case 2: {
            int n;
            cout << "Zadejte cele nezaporne cislo n: ";
            cin >> n;
            int soucet = 0;
            while (n > 0) {
                soucet += n % 10;
                n = n / 10;
            }
            cout << "Ciferny soucet cisla je: " << soucet << endl;
        }break;

        case 3: {
            cout << "Konec programu!!!" << endl;
        }break;

        
        default:cout << "Bylo zadano neco spatneho bro...";
            break;
        }

    } while (volba != 3);
}
