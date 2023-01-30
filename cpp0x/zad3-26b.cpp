#include <iostream>
#include <limits>
#include <string>

using namespace std;

void wczytajOsobe(int &i, string &imie, string &nazwisko, int &wiek)  {
  cout << "Osoba " << i+1 << endl;
  
  cout << "Podaj imie: ";
  getline(cin, imie);

  cout << "Podaj nazwisko: ";
  getline(cin, nazwisko);

  cout << "Podaj wiek: ";
  cin >> wiek;
  bool cinFail = cin.fail();
  
  while(cinFail == true)  {
    cin.clear();
    cin.ignore(numeric_limits<streamsize> ::max(), '\n');
    cout << "Podano bledne dane, prosze sprobowac ponownie: ";
    cin >> wiek;
    cinFail = cin.fail();
  }

  cin.clear();
  cin.ignore(numeric_limits<streamsize> ::max(), '\n');

  cout << endl;
}

void wypiszOsobe(int &i, string &imie, string &nazwisko, int &wiek)  {
  cout << endl;
  cout << "Osoba " << i+1 << endl;
  cout << "Imie: " << imie << endl;
  cout << "Nazwisko: " << nazwisko << endl;
  cout << "Wiek: " << wiek << endl;
}

int main()
{
    int limit = 2, wiek[limit];
    string imie[limit], nazwisko[limit];
    for(int i = 0; i < limit; i++)
      wczytajOsobe(i, imie[i], nazwisko[i], wiek[i]);
   
    for(int i = 0; i < limit; i++)
      wypiszOsobe(i, imie[i], nazwisko[i], wiek[i]);
   
    return 0;
}