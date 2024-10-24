#include <iostream>
#include <cstdlib>
#include <random>
#include <cmath>
using namespace std;

bool balsiuTikrinimas (char raide) {
    cout << "Jus pasirinkote balsiu tikrinima" << endl;
    char balses[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    cout << "Irasykite kuria raide norite tikrinti: " << endl;
    cin >> raide;
    for (int i = 0; i < 10; i++) {
        if (raide == balses[i]) {
            cout << "True" << endl;
            return true;
        }
    }
    cout << "False" << endl;
    return false;
}
void didziausiasBendrasDaliklis(int sk1, int sk2) {
    int didziausiasBendrDaliklis;


    while (abs (sk1) && abs (sk2)) {
        if (abs(sk1) > abs(sk2)) {
            sk1 %= sk2;
        }else {
            sk2 %= sk1;
        }
        didziausiasBendrDaliklis = sk1 + sk2;
        cout << "Didziausias bendras daliklis: " << didziausiasBendrDaliklis << endl;
    }
}
int atsitiktinisSkaicius() {
    return rand() % 100 + 1;
}
void zaidimas() {
    cout << "----Jus pasirinkote zaidima----" << endl;
    cout << endl;
    int atsitiktinisSk = atsitiktinisSkaicius();
    int skaicius = 0;
    while (skaicius != atsitiktinisSk) {
        cout << "Bandykite atspeti skaiciu nuo 1 iki 100 " << endl;
        cin >> skaicius;
        if (skaicius > atsitiktinisSk) {
            cout << "Jusu ivestas skaicius - " << skaicius << " yra didesnis uz atsitiktini - "  << endl;
        }else if (skaicius < atsitiktinisSk) {
            cout << "Jusu ivestas skaicius - " << skaicius << " yra mazesnis uz atsitiktini - " << endl;
        } else {
            cout << "Jusu ivestas skaicius - " << skaicius << " yra lygus su atsitiktiniu - " << endl;
        }
    }
}
void fizzBuzz(int n) {
    cout << " ----Jus pasirinkote FizzBuzz---- " << endl;
    cout << endl;
    cout << "Iveskite sveikaji skaiciu" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }

}
int main()
    {
        int meniu;
        char raide;
        int n;
        int sk1; int sk2;
        while (meniu != 5) {
            cout << "Meniu:" << endl;
            cout << "1. Balsiu tikrinimas" << endl;
            cout << "2. Ieskoti didziausia bendra dalikli" << endl;
            cout << "3. Minigame - atspek skaiciu" << endl;
            cout << "4. FizzBuzz" << endl;
            cout << "5. Iseiti" << endl;
            cout << "Iveskite savo pasirinkima: " << endl;
            cin >> meniu;
            switch (meniu) {
                case 1:
                    balsiuTikrinimas(raide);
                break;
                case 2:
                    cout << "Iveskite skaicius noredami surasti didziausia bendra dalikli - " << endl;
                    cin >> sk1 >> sk2;
                    didziausiasBendrasDaliklis(sk1, sk2);
                break;
                case 3:
                    srand(time(nullptr));
                    zaidimas();
                break;
                case 4:
                fizzBuzz(n);
                break;
                default:
                    cout << "Jus isejote is meniu" << endl;
            }

        }

    return 0;
}
