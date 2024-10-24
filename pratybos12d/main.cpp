#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "-------1 uzduotis--------" << endl;

    string vardas = "Dovydas";
    string pavarde = "Sinkevicius";
    int amzius = 19;
    cout << "Vardas: " << vardas << endl;
    cout << "Pavarde: " << pavarde << endl;
    cout << "Amzius: " << amzius << endl;
// antra uzduotis
    cout << "-------2 uzduotis-------" << endl;

    string krepsinioKlubas = "Vilniaus Rytas";
    int ikurimoMetai = 1997;
    string savininkas = "Darius Gudelis";
    string arena = "Jeep arena";
    int vietuSkaicius = 2500;

    cout << "Krepsinio komanda: " << krepsinioKlubas << endl;
    cout << "Ikurimo metai: " << ikurimoMetai  << endl;
    cout << "savininkas: " << savininkas << endl;
    cout << "Arena: " << arena <<endl;
    cout << "VietuSkaicius: " << vietuSkaicius << endl;
// trecia uzduotis
    cout << "-------3 uzduotis-------" << endl;

    string marke = "BMW";
    string modelis = "525d";
    int metai = 2011;
    float litrazas = 2.5;
    string spalva = "tamsiai sidabrines";

    cout << "Automobilis: " << marke << " " << modelis;
    cout << " yra pagamintas " << metai << ".";
    cout << " Jo motoras " << litrazas << " litrazo.";
    cout << " Automobilis yra " << spalva << " spalvos." << endl;
// ketvirta uzduotis
    cout << "-------4 uzduotis-------" << endl;

    int a = 13;
    int b = 5;
    double c = 17.5;
    cout << a + b - c << endl;
    cout << 15 / 2 + c << endl;
    cout << a / static_cast<double>(b) + 2 * c << endl;
    cout << 14 % 3 + 6.3 + b / a << endl;
    cout << static_cast<int>(c) % 5 + a - b << endl;
    cout << 13.5 / 2 + 4.0 * 3.5 + 18 << endl;
    // penkta uzduotis
    cout << "-------5 uzduotis-------" << endl;

    double sk1 = 5;
    double sk2 = 0;
    double sk3 = 3;
    double sk4 = 4;
    double sk5 = 1;

    cout << sk1 + sk2 + sk3 + sk4 + sk5 / 5 << endl;
// sesta uzduotis
cout << "-------6 uzduotis-------" << endl;
    int dviSk = 46;
    int num = dviSk / 10;
    int num2 = dviSk % 10;
    int suma = num + num2;
    cout << "skaitmenu suma: " << suma << endl;
    

    return 0;
}
