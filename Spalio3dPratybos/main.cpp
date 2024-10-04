#include <iostream>
using namespace std;
/*---------------------pirma uzduotis-------------------
int suskaiciuotiPerimetra(int krastine) {
   int sum = krastine + krastine + krastine + krastine;
    return sum;
}
void suskaiciuotiPlota(int krastine, int& plotas) {
    plotas = krastine * krastine;
}*/
double celsiusToFahrenheit(double tempCelcius) {
 cout << "Type in celcius to convert in fahrenheit = ";
    cin >> tempCelcius;
    double tempFahrenheit = (tempCelcius * 9 / 5) + 32;
    cout << "Pavertus i fahrenheit: " << tempFahrenheit << endl;
    return tempFahrenheit;
}
double fahrenheitToCelsius(double tempFahrenheit, double& tempCelcius) {
cout << "Type in fahrenheit to convert to celcius = ";
    cin >> tempFahrenheit;
    double tempC = tempFahrenheit * 5 / 9 - 32;
    cout << "Pavertus i celcius: " << tempC << endl;
    return tempC;
}
int main()
{
    double tempCelcius, tempFahrenheit, tempC;

    celsiusToFahrenheit(tempCelcius);
    fahrenheitToCelsius(tempFahrenheit, tempC);

    /*int krastine, plotas, perimetras;
    cout << "iveskite krastines ilgi " << endl;
    cin >> krastine;
    perimetras = suskaiciuotiPerimetra(krastine);
    cout << "Gautas perimetras = " << perimetras << endl;
    suskaiciuotiPlota(krastine, plotas);
    cout << "Gautas plotas = " << plotas << endl;*/


    return 0;
}
