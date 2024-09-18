#include <iostream>
#include <string>
using namespace std;
int main() {
    int num1 = 0;
    string fruit = "apple";
    if (fruit == "banana") {
        cout << "banana" << endl;
    }
    else if (fruit == "apple") {
        cout << "apple" << endl;
    }
    else (fruit != "banana" );{
    cout << " you have something else" << endl;
    };
    /*cout << "_______SWITCH DALIS______" << endl;
    while (true) {
        cout << "enter number(1-2): ";
        cin >> number;
        switch (number) {

            case 1:
                cout << "you have an apple" << endl;
            break;
            case 2:
                cout << "you have a banana" << endl;
            break;
            default:
                cout << "you have something else" << endl;
        }

    }*/
    cout << "______for ciklas______" << endl;
    cout << "Enter a positive intager: " << endl;

    cin >> num1;

    int result = 0;

    for (int i = 0; i <= num1; i++) {
        result = result + i;
    }
    return 0;
}
