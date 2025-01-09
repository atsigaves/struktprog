#include <iostream>
#include <string>
#include <fstream>
#include <regex>
#include <cmath>
using namespace std;

struct menuItemType {
    string menuItem;
    double menuPrice;
};

void Kiekiai(int kiekiai[], int dydis) {
    for (int i = 0; i < dydis; i++) {
        kiekiai[i] = 0;
    }
}

void tekstoAtskyrimas(const string line, string& tekstas, double& skaicius) {
    regex numberRegex(R"((.*?)(-?\d+(\.\d+)?))");
    smatch sutapimas;
    if (regex_search(line, sutapimas, numberRegex)) {
        tekstas = sutapimas[1].str();
        skaicius = stod(sutapimas[2].str());
    }
}

void getData(menuItemType menu[], int dydis) {
    string line;
    ifstream duomenys("maistas.txt");
    int x = 0;
    while (getline(duomenys, line) && x < dydis) {
        tekstoAtskyrimas(line, menu[x].menuItem, menu[x].menuPrice);
        x++;
    }
    duomenys.close();
}

int ilgasString(menuItemType menu[], int dydis) {
    int ilgas = 0;
    for (int i = 0; i < dydis; i++) {
        if (menu[i].menuItem.length() > ilgas) {
            ilgas = menu[i].menuItem.length();
        }
    }
    return ilgas;
}



void showMenu(menuItemType menu[], int dydis) {
    cout << "Sveiki atvyke i restorana 'pietutis' " << endl;
    cout << "Pasirinkite maista irasius jo skaiciu" << endl;
    int tarpai;
    for (int i = 0; i < dydis; i++) {
        tarpai = ilgasString(menu, dydis) - menu[i].menuItem.length();
        cout << fixed << setprecision(2) << i + 1 << ". " << menu[i].menuItem << string(tarpai, ' ') << " " << menu[i].menuPrice << "e" << endl;
    }
    cout << "9. cekis" << endl;
    cout << "Jusu pasirinkimas:" << endl;
}

void printCheck(menuItemType menu[], const int kiekiai[], int dydis) {
    ofstream fout("cekis.txt");
    double sum = 0, mokesciuSk = 0, galutine = 0;
    fout << "Sveiki atvyke i 'pietutis'" << endl;
    for (int i = 0; i < dydis; i++) {
        if (kiekiai[i] > 0 ) {
            int tarpai = ilgasString(menu, dydis) - menu[i].menuItem.length();
            fout << fixed << setprecision(2) << kiekiai[i] << " " << menu[i].menuItem << string(tarpai, ' ') <<  menu[i].menuPrice * kiekiai[i] << "e" << endl;
            sum += menu[i].menuPrice * kiekiai[i];
        }
    }
    mokesciuSk = sum * 0.21;
    galutine = mokesciuSk + sum;
    fout << fixed << setprecision(2) << "Mokesciai - " << mokesciuSk << "e" << endl;
    fout << fixed << setprecision(2) << "Galutine suma - " << galutine << "e" << endl;
    fout.close();
}

int main() {
    const int dydis = 8;
    menuItemType menuList[dydis];
    int kiekiai[dydis];
    int pasirinkimas = 0;

    Kiekiai(kiekiai, dydis);
    getData(menuList, dydis);

    while (pasirinkimas != 9) {
        showMenu(menuList, dydis);
        cin >> pasirinkimas;
        if (pasirinkimas >= 1 && pasirinkimas <= dydis) {
            kiekiai[pasirinkimas - 1]++;
        }
    }
    printCheck(menuList, kiekiai, dydis);
        return 0;
    }
