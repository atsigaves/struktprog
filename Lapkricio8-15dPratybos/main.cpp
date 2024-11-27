#include <iostream>
#include <fstream>
#include  <string>
using namespace std;
int main()
{
    int masyvas [4];
    int k = 0;
    int suma;
    ifstream failas;
    failas.open("input.txt");
    while (!failas.eof()) {
        failas >> masyvas[k];
        k++;
    }
    failas.close();
    cout << endl;
    for (int i = 0; i < k; i++) {
        cout << masyvas[i] << endl;

    }
    suma = masyvas[0] + masyvas[1] + masyvas[2] + masyvas[3] + masyvas[4];
    cout << endl;
    cout << "Susumuoti skaiciai is failo: " << suma << endl;
    return 0;
}
