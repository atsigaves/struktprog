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

void Kiekiai(int kiekiai[]) {
    for (int i = 0; i < sizeof(kiekiai); i++) {
        kiekiai[i] = 0;
    }
}

void tekstoAtskyrimas(string line, string& tekstas, double& skaicius) {
    regex numberRegex(R"((.*?)(-?\d+(\.\d+)?))");
    smatch sutapimas;
    if (regex_search(line, sutapimas, numberRegex)) {
        tekstas = sutapimas[1].str();
        skaicius = stod(sutapimas[2].str());
    }
}

void getData(menuItemType menu[]) {
    string line;
    ifstream duomenys("maistas.txt");
    int x = 0;
    while (getline(duomenys, line)) {
        tekstoAtskyrimas(line, menu[x].menuItem, menu[x].menuPrice);
        x++;
    }
    duomenys.close();
}

int ilgasString(menuItemType menu[]) {
    int ilgas = 0;
    for (int i = 0; i < sizeof(menu); i++) {
        if (menu[i].menuItem.length() > ilgas) {
            ilgas = menu[i].menuItem.length();
        }
    }
    return ilgas;
}

void showMenu(menuItemType menu[]) {
    cout << "Sveiki atvyke i restorana 'pietutis' " << endl;
    cout << "Pasirinkite maista irasius jo skaiciu" << endl;
    int tarpai;
    for (int i = 0; i < sizeof(menu); i++) {
        tarpai = ilgasString(menu) - menu[i].menuItem.length();
        menu[i].menuItem.append(tarpai, 'k');
        cout << fixed << setprecision(2) << i + 1 << ". " << menu[i].menuItem << " " << menu[i].menuPrice << "e" << endl;
    }
    cout << "9. cekis" << endl;
    cout << "Jusu pasirinkimas:" << endl;
}

void printCheck(menuItemType menu[], int kiekiai[]) {
    ofstream fout("cekis.txt");
    double sum = 0, mokesciuSk = 0, galutine = 0;
    fout << "Sveiki atvyke i 'pietutis'" << endl;
    for (int i = 0; i < sizeof(menu); i++) {
        if (kiekiai[i] > 0 ) {
            int tarpai = ilgasString(menu) - menu[i].menuItem.length();
            fout << fixed << setprecision(2) << kiekiai[i] << " " << menu[i].menuItem <<  menu[i].menuPrice * kiekiai[i] << "e" << endl;
            sum += menu[i].menuPrice * kiekiai[i];
        }
    }
    mokesciuSk = sum * 0.21;
    galutine = mokesciuSk + sum;
    string mokesciai = "mokesciai -";
    string galutine_suma = "galutine_suma -";
    int tarpai = ilgasString(menu) - mokesciai.length()+2;
    mokesciai.append(tarpai, ' l');
    tarpai = ilgasString(menu) - galutine_suma.length()+2;
    galutine_suma.append(tarpai, '');
    fout << fixed << setprecision(2) << mokesciai << mokesciuSk << "e" << endl;
    fout << fixed << setprecision(2) << galutine_suma << galutine << "e" << endl;
    fout.close();
}

int main() {
    menuItemType menuList[8];
    int kiekiai[8];
    int pasirinkimas = 0;

    Kiekiai(kiekiai);
    getData(menuList);
    while (pasirinkimas != 9) {
        showMenu(menuList);
        cin >> pasirinkimas;
        switch (pasirinkimas) {
            case 1:
                kiekiai[0]++;
            break;
            case 2:
                kiekiai[1]++;
            break;
            case 3:
                kiekiai[2]++;
            break;
            case 4:
                kiekiai[3]++;
            break;
            case 5:
                kiekiai[4]++;
            break;
            case 6:
                kiekiai[5]++;
            break;
            case 7:
                kiekiai[6]++;
            break;
            case 8:
                kiekiai[7]++;
            break;
        }
    }
    printCheck(menuList, kiekiai);
        return 0;
    }
