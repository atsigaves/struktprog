#include <iostream>
using namespace std;
int main() {
    int eilutes,stulpeliai,eilutes_sum=0,stulpelio_sum=0,max=0;

    cout << "Iveskite eiluciu skaiciu:" << endl;
    cin >> eilutes;
    cout << "Iveskite stulpeliu skaiciu:" << endl;
    cin >> stulpeliai;

    int xy[eilutes][stulpeliai];

    for(int i=0;i < eilutes;i++) {
        for(int j=0;j < stulpeliai;j++) {
            cout << "Iveskite elemento "<<i+1<<" "<<j+1<<" verte"<< endl;
            cin >> xy[i][j];
        }
    }
    return 0;
}
