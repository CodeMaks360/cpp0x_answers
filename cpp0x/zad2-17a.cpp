#include <iostream>

using namespace std;

int wczytajLiczbe()
{
  int liczba;
  cin >> liczba;
  bool czyBlad = cin.fail();
  while(czyBlad == 1)  {
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Podano bledne dane, prosze sprobowac ponownie: "; cin >> liczba;
    czyBlad = cin.fail();
  }
  return liczba;
}

int main()
{
    cout << "Podaj liczbe: ";
    int liczba = wczytajLiczbe();
    cout << "Podales liczbe: " << liczba << endl;
    return 0;
}