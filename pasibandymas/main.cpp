#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main(){
   int n[10], i;
    for (i = 0; i <= 9; i++) {
        n[i] = 0;
    }
    cout << setw(10) << "elementas yra " << setw(10) << " reiksme " << endl;
    for (i = 0; i <= 9; i++) {
        cout << setw(7) << i << setw(13) << n[i] << endl;
    }
    return 0;
}
