#include <iostream>
#include <fstream>
#include  <string>
using namespace std;
int main()
{
    int masyvas [4];
    int k = 0;
    int suma;
    int masyvas1 [11];
    int l = 0;
    int suma1;
    int x, y;
    masyvas1[10] = x;
    y = 2;
    /*ifstream failas;
    failas.open("input.txt");
    while (!failas.eof()) {
        failas >> masyvas[k];
        k++;
    }
    for (int i = 0; i < k; i++) {
        cout << masyvas[i] << endl;

    }
    suma = masyvas[0] + masyvas[1] + masyvas[2] + masyvas[3] + masyvas[4];
   ofstream resul;
    resul.open("output.txt");
    resul << suma << endl;
    resul.close();
    */
    // antra uzduotis
    ifstream failas1;
    failas1.open("input1.txt");
    while (failas1.eof()) {
        failas1 >> masyvas1[l];
        l++;
    }
    for (int i = 0; i < x; i++) {
        cout << x << endl;

    }


    return 0;
}
