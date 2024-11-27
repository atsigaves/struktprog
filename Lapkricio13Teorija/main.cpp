#include <iostream>
using namespace std;
struct Komandos {
    string pavadinimas;
    string miestas;
    bool zaidziaEuroLygoje;

};
int main()
{
    Komandos komandos[18];
    Komandos temp;
    int kiekis, trinamasElem;
    string ieskomaKomanda;


    cout << "kiek komandu norite ivesti? (ne daugiau kaip 18)" << endl;
    cin >> kiekis;
    for (int i = 0; i < kiekis; i++) {
        cout  << "Iveskite komandos pavadinima " << endl;
        cin >> komandos[i].pavadinimas;
        cout << "Iveskite kokiame mieste isikurusi komanda " << endl;
        cin >> komandos[i].miestas;
        cout << "Ar zaidzia EuroLygoje? Jei taip spauskite 1, o jei ne - 0 " << endl;
        cin >> komandos[i].zaidziaEuroLygoje;
        cout << "_________________________________" << endl;
    }
    for (int i = 0; i < kiekis; i++) {
        for (int j = i + 1; j < kiekis; j++) {
            if (komandos[i].miestas > komandos[j].miestas) {
                temp = komandos[i];
                komandos[i] = komandos[j];
                komandos[j] = temp;
            }
        }
    }
    cout << "Iveskite trinama elementa. Pasirinkite skaiciu nuo vieno iki " << kiekis << endl;
    cin >> trinamasElem;

    for (int i = trinamasElem - 1; i < kiekis; i++) {
        komandos[i] = komandos[i+1];
        komandos[kiekis].pavadinimas = "";
        komandos[kiekis].miestas = "";
        komandos[kiekis].zaidziaEuroLygoje = false;
    } kiekis --;
    for (int i = 0; i < kiekis; i++) {
        cout << "Komanda - " << komandos[i].pavadinimas << " " << komandos[i].miestas << endl;
    }
    cout << "Iveskite ieskomos komandos pavadinima " << endl;
    cin >> ieskomaKomanda;
    for (int i = 0; i < kiekis; i++) {
        if (komandos[i].pavadinimas == ieskomaKomanda) {
            string arzaidzia = komandos[i].zaidziaEuroLygoje == 1 ? "Zaidzia Eurolygoje" : "Nezaidzia Eurolygoje";
            cout << "Informacija apie komanda - " << komandos[i].pavadinimas << " " << komandos[i].miestas << " " << arzaidzia << endl;
        }
    }
    return 0;
}
