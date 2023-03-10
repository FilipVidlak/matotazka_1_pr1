// matotazka_1_pr1.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include <ctime>

int main()
{
    using namespace std;

    int main(); {
        int volba;
        do { // pouziji do while - potrebuji provest program alespon jednou a do doby, dokud uzivatel nezada 3
            cout << "Vyberte program dle zadání: 1 - Mocnina, 2 - Ciferny soucet, 3 - Konec: ";
            cin >> volba;

            switch (volba) {
            case 1:
            {
                double cislo = (double)rand() / RAND_MAX * 9 + 1; //generovani nahodneho REALNEHO cisla z intervalo <1;10)
                int n = rand() % 11 - 5; //generovani nahodneho CELEHO cisla z intervalu (-5;5>
                double vys = 1;
                //vypocet mocniny an pomoci cyklu for
                for (int i = 0; i < abs(n); i++) { //abs-absolutni hodnota, kazde cislo na nekolikatou je kladne
                    vys *= cislo;
                }
                if (n < 0) {
                    vys = 1 / vys;
                }
                cout << "Mocnina " << cislo << "na" << n << " je rovna " << vys << endl;
                break;
            }
            case 2: 
            {
                int n;
                int cifra;
                int soucet = 0;
                cout << "Zadejte cele nezaporne cislo n: ";
                cin >> n;
                //pomoci cyklu while vypocitam ciferny soucet
                while (n > 0) {
                    cifra = n % 10; // vezmeme cifru
                    soucet += cifra; //soucet cifry
                    n /= 10; // pokracovani na dalsi cifru
                }
                cout << "Ciferny soucet je " << soucet << endl;
                break;
            }
            case 3: 
            {
                cout << "Konec programu." << endl;
                system("pause");
                return 0;
            }
            }
        } while (volba != 3);
    }
}