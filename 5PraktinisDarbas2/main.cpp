#include <iostream>
using namespace std;

struct klientas {
    int klientoId;
    string klientoVardas;
    string klientoPavarde;
    int klientoAmzius;
};
int main()
{
    klientas *masyvas;
    int x;
    cout << "pasirinkite klientu kieki - ";
    cin >> x;
    masyvas = new klientas[x];
    int kiekis = -1;
    int pasirinkimas;
    int trintiId, trinimoIndex;
    while (pasirinkimas != 4) {
        cout << "____Pasirinkite varianta is menu____" << endl;
        cout << "1. Prideti kliento duomenis" << endl;
        cout << "2. Atspausdinti visus kontaktus" << endl;
        cout << "3. Istrinti studenta pagal ID" << endl;
        cout << "4. Iseiti" << endl;
        cout << "Pasirinkimas - ";
        cin >> pasirinkimas;
        switch (pasirinkimas) {
            case 1:
                cout<<"Iveskite studento ID"<<endl;
            cin>>masyvas[kiekis+1].klientoId;
            cout<<"Iveskite studento varda"<<endl;
            cin>>masyvas[kiekis+1].klientoVardas;
            cout<<"Iveskite studento pavarde"<<endl;
            cin>>masyvas[kiekis+1].klientoPavarde;
            cout<<"Iveskite studento amziu"<<endl;
            cin>>masyvas[kiekis+1].klientoAmzius;
            kiekis++;
            break;
            case 2:
                cout<<sizeof(masyvas)<<endl;
            for(int i=0;i<sizeof(masyvas);i++) {
                cout << i+1 << ". " << masyvas[i].klientoId << " " << masyvas[i].klientoVardas << " " << masyvas[i].klientoPavarde << " " << masyvas[i].klientoAmzius << endl;
            }
            break;
            case 3:
                klientas *temp = masyvas;
            cout<<"Pasirinkite studento ID kuri norite istrinti is saraso: "<<endl;
            cin>>trintiId;
            for(int i=0;i<sizeof(temp);i++) {
                if (temp[i].klientoId==trintiId) {
                    trinimoIndex = i;
                }
            }
            for(int i = trinimoIndex;i<sizeof(temp);i++) {
                temp[i].klientoId = temp[i+1].klientoId;
                temp[i].klientoVardas = temp[i+1].klientoVardas;
                temp[i].klientoPavarde = temp[i+1].klientoPavarde;
                temp[i].klientoAmzius = temp[i+1].klientoAmzius;
            }
            int s=sizeof(masyvas);
            masyvas = new klientas[s-1];
            for (int i=0;i<sizeof(masyvas);i++) {
                masyvas[i].klientoId=temp[i].klientoId;
                masyvas[i].klientoVardas=temp[i].klientoVardas;
                masyvas[i].klientoPavarde=temp[i].klientoPavarde;
                masyvas[i].klientoAmzius=temp[i].klientoAmzius;
            }
            delete [] temp;
            break;
        }

    }
    return 0;
}
