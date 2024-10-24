#include <iostream>
using namespace std;

int main() {
    int skaiciai[100];
    int n;
    int suma = 0;
    cout << "Iveskite 5 sveikuosius skaicius - " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> skaiciai[i];
        suma += skaiciai[i];
    }
    cout << "Skaiciu suma masyve: " << suma << endl;
    cout << "Iveskite masyvo elementu skaiciu - ";
    cin >> n;
    cout << "Iveskite masyvo elementus: ";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "-aji masyvo elementa ";
        cin >> skaiciai[i];
        cout << "Ivestas " << i + 1 << " elementas " << skaiciai[i] << endl;
    }
    int max = skaiciai[0];
    int imax = 0;
    int min = skaiciai[0];
    int imin = 0;
    for (int i = 1; i < n; i++) {
        if (skaiciai[i] > max) {
            max = skaiciai[i];
            imax = i;
        }
        if (skaiciai[i] < min) {
            min = skaiciai[i];
            imin = i;
        }
    }
        cout << " ---- Rezultatai ---- " << endl;
        cout << "Didziausias elementas yra " << max << " jo vieta yra " << imax+1 << endl;
        cout << "Maziausias elementas yra " << min << " jo vieta yra " << imin+1 << endl;

    return 0;
}
