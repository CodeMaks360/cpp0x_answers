#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand(time(NULL));
  int LIMIT = 999;
  int random[LIMIT];
  cout << "Program losujacy 999 liczb calkowitych z zakresu [4 ; 10], zapisujacy je do tablicy oraz wypisujacy ich sume" << endl << endl;

  

  int i = 0, sum = 0;
  while(i < LIMIT)  {
    random[i] = (rand() % 7) + 4;
    cout << "Liczba " << i + 1 << ": " << random[i] << endl;
    sum += random[i];
    i++;
  }

  cout << "Suma wszystkich liczb wynosi: " << sum << endl;
    
  return 0;
}