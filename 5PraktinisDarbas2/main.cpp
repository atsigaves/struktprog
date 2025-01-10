#include <iostream>
using namespace std;

struct klientas {
    int klientoId;
    string klientoVardas;
    string klientoPavarde;
    int klientoAmzius;
};
int main()
{
    klientas *masyvas;
    int x;
    cout << "pasirinkite klientu kieki: " << endl;
    cin >> x;
    masyvas = new klientas[x];
    int kiekis = -1;
    int pasirinkimas;
    int trintiId, trinimoIndex;
    while (pasirinkimas != 4) {
        cout << "____Pasirinkite varianta is menu____" << endl;
        cout << "1. Prideti kliento duomenis" << endl;
        cout << "2. Atspausdinti visus kontaktus" << endl;
        cout << "3. Istrinti studenta pagal ID" << endl;
        cout << "4. Iseiti" << endl;
        cout << "Pasirinkimas - "  << endl;
        cin >> pasirinkimas;
        switch (pasirinkimas) {
            case 1:
                cout << "Iveskite studento ID" << endl;
            cin >> masyvas
    }
    return 0;
}
