// 01.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include <string> 
using namespace std;

string faktorial(int a, int b) {
    string vys = "";

    while (a <= b) {
        int f = 1;
        for (int i = 1; i <= a; i++) {
            f *= i;
        }
        vys += to_string(a) + " ma faktorial: " + to_string(f) + "\n";
        a++;
    }

    return vys;
}

int main() {
    int a, b;
    cout << "Zadejte cele cislo a: ";
    cin >> a;
    cout << "Zadejte cele cislo b: ";
    cin >> b;

    cout << faktorial(a, b) << endl;
    return 0;
}
