#include <iostream>
#include <cstring>

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
string uzsifravimasASCII(char tekstas[], char raktas[]) {
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
                int rezultatoIndeksas = ((tekstoIndeksas - asciiPradzia)+ (raktoIndeksas - asciiPradzia)) % asciiIlgis + asciiPradzia;
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
            if (tekstoIndeksas !=-1 && raktoIndeksas != -1) {
                int rezultatoIndeksas = ((tekstoIndeksas - asciiPradzia) - (raktoIndeksas - asciiPradzia) + asciiIlgis) % asciiIlgis + asciiPradzia;
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


int main()
{
    return 0;
}
