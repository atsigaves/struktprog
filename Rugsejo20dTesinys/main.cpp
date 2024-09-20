#include <iostream>
using namespace std;

int main() {
    int choice = 0;
    int num1, num2;
    int i = 0;

    while (choice !=3) {
        cout << "1. Ieskoti nelyginiu skaiciu" << endl;
        cout << "2. Ieskoti lyginiu skaiciu" << endl;
        cout << "3. Iseiti" << endl;
        cout << "Jusu pasirinkimas: " << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Jus pasirinkote pirma opcija " << endl;
            while (i<=20) {
                if (i%2==1) {
                    cout << "skaicius nelyginis " << i << endl;
                }
                i++;
            }
            break;
            case 2:
                cout << "Jus pasirinkote antra operacija" << endl;
            while (i<=20) {
                if (i%2==0) {
                    cout << "skaicius lyginis " << i << endl;
                }
                i++;
            }
            break;
            case 3:
                cout << "Jus isejote is operacijos" << endl;
            break;
            default:
                cout << "Tokio pasirinkimo nera" << endl;
        }
    }
    return 0;
}
