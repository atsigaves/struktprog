#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

/* ---------------------pirma uzduotis-----------------
    void getName() {
    string name = "Dovydas ";
    string surname = "Sinkevicius ";
    string reason = "pasrinikau todel nes noriu igauti igudziu su kompiuteriais ir ju sistemom";
    cout << name << surname << reason << endl;
}
*/

/* --------------------antra uzduotis-------------------
    void aukstojiMok() {
    string kolegija = "Vilniaus kolegija - ";
    cout << kolegija;
}
    void aukstFakult() {
    string fakultetas = "Elektronikos ir informatikos fakultetas";
    cout << fakultetas << endl;
}
*/
/* ----------------------trecia uzduotis----------------
int getRandomNumber() {
    int n = 100;
    for (int i = 0; i < 10; i++) {
        cout << rand() % n  << " ";
    }
}
*/
//---------------------------ketvirta uzduotis----------   ne taip padariau:|....
/*int a;
int b;
int suma;
int skirt;
int sandau;
int dalyba;
int skSuma () {
    cout << "iveskite pirma skaiciu: " << endl;
    cin >> a;
    cout << "iveskite antra skaiciu: " << endl;
    cin >> b;
    suma = a + b;
    cout << "Sudejus skaicius gauname: " << suma << endl;
}
double skSkirt() {
    cout << "iveskite pirma skaiciu: " << endl;
    cin >> a;
    cout << "iveskite antra skaiciu: " << endl;
    cin >> b;
    skirt = a - b;
    cout << "atemus skaicius gauname: " << skirt << endl;
}
double skSandau() {
    cout << "iveskite pirma skaiciu: " << endl;
    cin >> a;
    cout << "iveskite antra skaiciu: " << endl;
    cin >> b;
    sandau = a * b;
    cout << "sudauginus skaicius gauname: " << sandau << endl;
}
double skDalyb() {
    cout << "iveskite pirma skaiciu: " << endl;
    cin >> a;
    cout << "iveskite antra skaiciu: " << endl;
    cin >> b;
    dalyba = a / b;
    cout << "dalijant skaicius gauname: " << dalyba << endl;
}*/
int didesnisArbaLygus(int a, int b) {
    if (a == b) {
        cout << "a lygus b" << endl;
        cout << "Ivesti skaiciai "<< a << "a - " << b << "b" << endl;
    } if (a > b ) {
        cout << "a didesnis uz b" << endl;
        cout << "Ivesti skaiciai " << a << "a - " << b << "b" << endl;
    } if (a < b ) {
        cout << "b didesnis uz a" << endl;
        cout << "Ivesti skaiciai " << a << "a - " << b << "b" << endl;
    }
}
int main()
{
    /*getName();
    getName();
    aukstojiMok();
    aukstFakult();
    getRandomNumber();
    skSuma();
    skSkirt();
    skSandau();
    skDalyb();
    */
    didesnisArbaLygus(1, 3);
    return 0;
}
