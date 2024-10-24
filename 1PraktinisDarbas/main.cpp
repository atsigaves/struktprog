#include <iostream>
#include <iomanip>
#include <set>
using namespace std;
int main ()
{
    int pasirinkimas, palyginimas, pirkimas, pardavimas;

    double pirkimoSuma;
    double pardavimoSuma;
    double EUR = 1;

    double GBP_Bendras = 0.8593;
    double GBP_Pirkti = 0.8450;
    double GBP_Parduoti = 0.9060;

    double USD_Bendras = 1.0713;
    double USD_Pirkti = 1.0547;
    double USD_Parduoti = 1.1309;

    double INR_Bendras = 88.8260;
    double INR_Pirkti = 85.2614;
    double INR_Parduoti = 92.8334;

    while (pasirinkimas != 4) {
        cout << "Meniu: " << endl;
        cout << "1. Valiutos kurso palyginimas su kita valiuta" << endl;
        cout << "2. Pirkti valiuta" << endl;
        cout << "3. Parduoti valiuta" << endl;
        cout << "4. Iseiti" << endl;
        cout << "Iveskite savo pasirinkima: " << endl;
            cin >> pasirinkimas;

        switch (pasirinkimas) {

            case 1:
                cout << "Pasirinkite kuria valiuta norite palyginti" << endl;
            cout << "1. Palyginti GBP " << endl;
            cout << "2. Palyginti USD " << endl;
            cout << "3. Palyginti INR " << endl;

                cin >> palyginimas;

            switch (palyginimas) {
                case 1:

                    cout << fixed << setprecision(2) << "EUR lyginant su GBP yra " << GBP_Bendras << "e" << endl;
                break;
                case 2:

                    cout << fixed << setprecision(2) << "EUR lyginant su USD yra " << USD_Bendras << "e" << endl;
                break;
                case 3:

                    cout << fixed << setprecision(2) << "EUR lyginant su INR yra " << INR_Bendras << "e" << endl;
                break;

                default:
                    cout << "Tokio pasirinkimo nera" << endl;

            }

            break;
            case 2:
                cout << "Pasirinkite valiuta kuria norite pirkt: " << endl;
            cout << "1. GBP" << endl;
            cout << "2. USD" << endl;
            cout << "3. INR" << endl;
            cout << "4. Iseiti" << endl;
                cin >> pirkimas;
            cout << "Pateikite skaiciu" << endl;
            cin >> pirkimoSuma;

            switch (pirkimas) {
                case 1:
                    cout << fixed << setprecision(2) << "Uz " << pirkimoSuma << " nusipirkote " << pirkimoSuma / GBP_Pirkti << "EUR" << endl;
                break;
                case 2:
                    cout << fixed << setprecision(2) << "Uz " << pirkimoSuma << " nusipirkote " << pirkimoSuma / USD_Pirkti << "EUR" << endl;
                break;
                case 3:
                    cout << fixed << setprecision(2) << "Uz " << pirkimoSuma << " nusipirkote " << pirkimoSuma / INR_Pirkti << "EUR" << endl;
                break;
                default:
                    cout << "Tokio pasirinkimo nera" << endl;
            }
                break;
                case 3:
                    cout << "Pasirinkite valiuta kuria norite parduot: " << endl;
                cout << "1. GBP" << endl;
                cout << "2. USD" << endl;
                cout << "3. INR" << endl;
                cout << "4. Iseiti" << endl;
                    cin >> pardavimas;
                cout << "Pateikite skaiciu" << endl;
                cin >> pardavimoSuma;
                switch (pardavimas) {
                    case 1:
                        cout << fixed << setprecision(2) << "Uz " << pardavimoSuma << " pardavete " << pardavimoSuma / GBP_Parduoti << "EUR" << endl;
                    break;
                    case 2:
                        cout << fixed << setprecision(2) << "Uz " << pardavimoSuma << " pardavete " << pardavimoSuma / USD_Parduoti << "EUR" << endl;
                    break;
                    case 3:
                        cout << fixed << setprecision(2) << "Uz " << pardavimoSuma << " pardavete " << pardavimoSuma / INR_Parduoti << "EUR" << endl;
                    break;

                    default:
                        cout << "Tokio pasirinkimo nera" << endl;
                }
            break;
            default:
                cout << "Jus isejote is operacijos" << endl;
        }
    }



    return 0;
}
