#include <iostream>
using namespace std;

int main() {
    int r; // mainīgais, lai atkārtotu programmu
    do {
        int x; // lietotāju definēts mainīgais cik veseli skaitļi tiks doti
        cout << "Ievadi, cik skaitļus vēlies definēt: ";
        cin >> x;

        // Pārbaude, vai ievadītais skaitlis ir lielāks par 0 
        if (x <= 0) {
            cout << "Ievadītajam skaitlim jābūt veselam un pozitīvam!" << endl;
        } else {
            int a, summa = 0, skaits = 0;

            // Skaitļu ievades cikls
            for (int i = 1; i <= x; i = i + 1) {
                cout << "Ievadi " << i << ". skaitli: ";
                cin >> a;

                // Pārbauda, vai skaitlis ir nepāra
                if (a % 2 != 0) {
                    summa += a;
                    skaits = skaits + 1;
                }
            }
            
            // Ja ievadīts vismaz viens nepāra skaitlis, rēķina vidējo 
            if (skaits > 0) {
                double videjais = (double)summa / skaits;
                cout << "Nepāra skaitļu vidējais aritmētiskais: " << videjais << endl;
            } else {
                cout << "Kļūda! Netika ievadīts neviens nepāra skaitlis!" << endl;
            }
        }
        cout << "Vai vēlaties atkārtot programmu (1) vai beigt darbu (0)? " << endl;
        cin >> r;
	system("clear"); // Notīra konsoles logu no teksta

    } while (r == 1); 
    
    return 0;
}
