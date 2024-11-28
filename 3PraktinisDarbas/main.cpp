#include <iostream>
#include <cstring>
#include <string>
using namespace std;
const char abecele[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',};

string sifravimasABC(char tekstas[], char raktas[]) {
    int tekstoIndeksas = -1;
    int raktoIndeksas = -1;
    int rezultatoIndeksas;
    int tekstoIlgis = strlen(tekstas);
    string raktasString = raktas;
    while(raktasString.length() < strlen(tekstas)) {
        raktasString.append(raktasString.begin(), raktasString.end());
    }
    strcpy(raktas, raktasString.c_str());
    char rezultatas[100];
    for (int i = 0; i < tekstoIlgis; i++) {
        for (int j = 0; j < sizeof(abecele); j++) {
            if (toupper(tekstas[i]) == abecele[j]) {
                tekstoIndeksas = j;
            }
            if (toupper(raktas[i]) == abecele[j]) {
                raktoIndeksas = j;
            }
            if (tekstoIndeksas != -1 && raktoIndeksas != -1) {
                rezultatoIndeksas = (tekstoIndeksas + raktoIndeksas) % sizeof(abecele);
                rezultatas[i] = abecele[rezultatoIndeksas];
                tekstoIndeksas = -1;
                raktoIndeksas = -1;
            }
        }
    }
    string rezultatasString = "";
for (int i = 0; i < tekstoIlgis; i++) {
    rezultatasString = rezultatasString + rezultatas[i];
}
return rezultatasString;
}

string desifravimasABC(char tekstas[], char raktas[]) {
    int tekstoIndeksas = -1;
    int raktoIndeksas = -1;
    int rezultatoIndeksas;
    int tekstoIlgis = strlen(tekstas);
    string raktasString = raktas;
    while(raktasString.length() < strlen(tekstas)) {
        raktasString.append(raktasString.begin(), raktasString.end());
    }
    strcpy(raktas, raktasString.c_str());
    char rezultatas[100];
    for (int i = 0; i < tekstoIlgis; i++) {
        for (int j = 0; j < sizeof(abecele); j++) {
            if (toupper(tekstas[i]) == abecele[j]) {
                tekstoIndeksas = j;
            }
            if (toupper(raktas[i]) == abecele[j]) {
                raktoIndeksas = j;
            }
            if (tekstoIndeksas != -1 && raktoIndeksas != -1) {
                rezultatoIndeksas = (tekstoIndeksas - raktoIndeksas + sizeof(abecele)) % sizeof(abecele);
                rezultatas[i] = abecele[rezultatoIndeksas];
                tekstoIndeksas = -1;
                raktoIndeksas = -1;
            }
        }
    }
    string rezultatasString = "";
    for (int i = 0; i < tekstoIlgis; i++) {
        rezultatasString = rezultatasString + rezultatas[i];
    }
    return rezultatasString;
}
string sifravimasASCII(char tekstas[], char raktas[]) {
    int asciiPradzia = 33;
    int asciiPabaiga = 126;
    int asciiIlgis = asciiPabaiga - asciiPradzia + 1;
    int tekstoIndeksas = -1;
    int raktoIndeksas = -1;
    int tekstoIlgis = strlen(tekstas);
    string raktasString = raktas;
    while(raktasString.length() < strlen(tekstas)) {
        raktasString.append(raktasString.begin(), raktasString.end());
    }
    strcpy(raktas, raktasString.c_str());
    char rezultatas[100];
    for (int i = 0; i < tekstoIlgis; i++) {
        for (int j = asciiPradzia; j < asciiPabaiga; j++) {
            if (tekstas[i] == static_cast<unsigned char>(j)){
                tekstoIndeksas = j;
            }
            if (raktas[i] == static_cast<unsigned char>(j)) {
                raktoIndeksas = j;
            }
            if (raktoIndeksas != -1 && tekstoIndeksas != -1) {
                int rezultatoIndeksas = ((tekstoIndeksas - asciiPradzia) + (raktoIndeksas - asciiPradzia)) % asciiIlgis + asciiPradzia;
                rezultatas[i] = (unsigned char)rezultatoIndeksas;
                tekstoIndeksas = -1;
                raktoIndeksas = -1;
            }
        }
    }
    string rezultatasString = "";
    for (int i = 0; i < tekstoIlgis; i++) {
        rezultatasString = rezultatasString + rezultatas[i];
    }
    return rezultatasString;
}
string desifravimasASCII(char tekstas[], char raktas[]) {
    int asciiPradzia = 33;
    int asciiPabaiga = 126;
    int asciiIlgis = asciiPabaiga - asciiPradzia + 1;
    int tekstoIndeksas = -1;
    int raktoIndeksas = -1;
    int tekstoIlgis = strlen(tekstas);
    string raktasString = raktas;
    while(raktasString.length() < strlen(tekstas)) {
        raktasString.append(raktasString.begin(), raktasString.end());
    }
    strcpy(raktas, raktasString.c_str());
    char rezultatas[100];
    for (int i = 0; i < tekstoIlgis; i++) {
        for (int j = asciiPradzia; j < asciiPabaiga; j++) {
            if (tekstas[i] == static_cast<unsigned char>(j)) {
                tekstoIndeksas = j;
            }
            if (raktas[i] == static_cast<unsigned char>(j)) {
                raktoIndeksas = j;
            }
            if (tekstoIndeksas != -1 && raktoIndeksas != -1) {
                int rezultatoIndeksas = (tekstoIndeksas - asciiPradzia - (raktoIndeksas - asciiPradzia) + asciiIlgis) % asciiIlgis + asciiPradzia;
                rezultatas[i] = (unsigned char)rezultatoIndeksas;
                tekstoIndeksas = -1;
                raktoIndeksas = -1;
            }
        }
    }
    string rezultatasString = "";
    for (int i = 0; i < tekstoIlgis; i++) {
        rezultatasString = rezultatasString + rezultatas[i];
    }
    return rezultatasString;
}

int main() {
    int pasirinkimas;
    char tekstas[100];
    char raktas[100];
    string rezultatas;
    char sifruotasTekstas[100];
    char sifruotasRaktas[100];
    while (pasirinkimas != 3) {
        cout << "___Pasirinkite norima procesa___" << endl;
        cout << "1. Sifravimas ir desifravimas naudojant abecele" << endl;
        cout << "2. Sifravimas ir desifravimas naudojant ASCII" << endl;
        cout << "3. Iseiti" << endl;
        cin >> pasirinkimas;
        if (pasirinkimas == 1) {
            int rinktis;
            cout << "pasirinkite norima procesa (abecele)" << endl;
            cout << "1. Sifravimas abecele" << endl;
            cout << "2. Desifravimas abecele" << endl;
            cin >> rinktis;
            if(rinktis == 1){
                cout << "Irasykite norima teksta sifravimui - ";
                cin >> tekstas;
                cout << "Irasykite rakta - ";
                cin >> raktas;
                rezultatas = sifravimasABC(tekstas, raktas);
                cout << "Sifruotas tekstas - " << rezultatas << endl;
            }else if (rinktis == 2) {
                cout << "Irasykite norima teksta desifravimui - ";
                cin >> tekstas;
                cout << "Irasykite rakta - ";
                cin >> raktas;
                rezultatas = desifravimasABC(tekstas, raktas);
                cout << "Desifruotas tekstas - " << rezultatas << endl;
            }
            } else if (pasirinkimas == 2) {
                int rinktis;
                cout << "Pasirinkote norima procesa (ASCII)" << endl;
                cout << "1. Sifravimas ASCII" << endl;
                cout << "2. Desifravimas ASCII" << endl;
                cin >> rinktis;
                if(rinktis == 1){
                    cout << "Irasykite norima teksta sifravimui(ASCII) - ";
                    cin >> sifruotasTekstas;
                    cout << "Irasykite rakta - ";
                    cin >> sifruotasRaktas;
                    rezultatas = sifravimasASCII(sifruotasTekstas, sifruotasRaktas);
                    cout << "Sifruotas tekstas (ASCII) - " << rezultatas << endl;
                } else if (rinktis == 2) {
                    cout << "Irasykite norima teksta desifravimui (ASCII) - ";
                    cin >> sifruotasTekstas;
                    cout << "Irasykite rakta - ";
                    cin >> sifruotasRaktas;
                    rezultatas = desifravimasASCII(sifruotasTekstas, sifruotasRaktas);
                    cout << "Desifruotas tekstas (ASCII) - " << rezultatas << endl;
                }
            }else if (pasirinkimas != 3) {
                cout << "Netinkamas pasirinkimas, bandykite is naujo" << endl;
            }
        }
    return 0;
}
