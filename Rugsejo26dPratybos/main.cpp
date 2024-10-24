#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
void getPlayerInfo(string playerTeam) {
    string name = "Jonas";
    string surname = "Valanciunas";
    string team = playerTeam;

    cout << "Zaidejas " << name << " " << surname << " zaidzia " << team << endl;

}
int getRandomNumber() {
    int randNum = rand() % 100 ;
    return randNum;
}
double getAverage(double num1, double num2) {
    return (num1 + num2) / 2;
}

int main()
{
    getPlayerInfo("Toronto Raptors");

    getRandomNumber();
    cout << "Atsitiktinis skaicius " << getRandomNumber() << endl;
    cout << "Atsitiktinis skaicius " << getRandomNumber() << endl;
    cout << "Atsitiktinis skaicius " << getRandomNumber() << endl;

    getAverage(17.5, 25);
    cout << "Vidurkis " << getAverage(17.5, 25) << endl;
    return 0;
}
