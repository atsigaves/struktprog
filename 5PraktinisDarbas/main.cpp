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
    for(int i=0;i < eilutes;i++) {
        for(int j=0;j < stulpeliai;j++) {
            if(max < xy[i][j]) {
                max = xy[i][j];
            }
            cout << xy[i][j] <<" ";
        }
        cout<<endl;
    }
    for(int i=0;i < eilutes;i++) {
        for(int j=0;j < stulpeliai;j++) {
            eilutes_sum+=xy[i][j];
        }
        cout << "Eilutes "<<i+1<<" suma: "<<eilutes_sum;
        eilutes_sum=0;
        cout<<endl;
    }
    for(int j=0;j < stulpeliai;j++) {
        for(int i=0;i < eilutes;i++) {
            stulpelio_sum+=xy[i][j];
        }
        cout << "Stulpelio "<<j+1<<" suma: "<<stulpelio_sum;
        stulpelio_sum=0;
        cout<<endl;
    }

    cout<<"Didziausia verte: "<< max<<endl;
    return 0;
}
