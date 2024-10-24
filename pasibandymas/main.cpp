#include <iostream>
#include <cstdlib>
using namespace std;
int getRandomNumber(){
  srand(time(nullptr));
  int randNum = rand() % 100;
  return randNum;
  }
int main() {
    cout << "Atsitiktinis skaicius - " << getRandomNumber() << endl;
    return 0;
}
