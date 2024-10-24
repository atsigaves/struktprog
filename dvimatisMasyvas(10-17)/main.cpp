#include <iostream>
#include <iomanip>
using namespace std;
const int eiulutes = 3;
const int stulpeliai = 2;
int main()
{
    int masyvas[eiulutes][stulpeliai];
    //duomenu ivedimas
    cout << "Iveskite " << eiulutes << " ir " << stulpeliai << " stulpeliu masyvu elementus " << endl;
    for (int i = 0; i < eiulutes; i++) {
        for (int j = 0; j < stulpeliai; j++) {
            cout << "Masyvo [" << i+1 << "][" << j+1 << "] elementas";
            cin >> masyvas[i][j];
        }
    }
    //masyvo atspausdinimas
    cout << "masyvo atspausdinimas" << endl;
    for (int i = 0; i < eiulutes; i++) {
        for (int j = 0; j < stulpeliai; j++) {
            cout << setw(5) << masyvas[i][j];
        }
        cout << endl;
    }
    cout << "masyvo eilutes elementu sudetis" << endl;
    for (int i = 0; i < eiulutes; i++) {
        int eilutesSuma = 0;
        for (int j = 0; j < stulpeliai; j++) {
            cout << setw(5) << masyvas[i][j];
            eilutesSuma += masyvas[i][j];
        }
        cout << setw(5) << eilutesSuma;
        cout << endl;
    }
    cout << "Masyvo stulpeliu elemento sudetis:" << endl;
    for (int j = 0; j < stulpeliai; j++) {
        int stulpeliuSuma = 0;
        for (int i = 0; i < eiulutes; i++) {
            stulpeliuSuma += masyvas[i][j];
        }
        cout << "Stulpelio " << j+1 << " elementu suma" << endl;
    }
    return 0;
}
