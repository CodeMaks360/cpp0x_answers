#include <iostream>

using namespace std;

int main()  {
  cout << "Podaj liczbe: "; int a = 0; cin >> a;
  
  bool czyBlad = cin.fail();
  while(czyBlad == 1)  {
    cin.clear();
    cin.ignore(1000, '\n');
     cout << "Podano bledne dane, prosze sprobowac ponownie: "; cin >> a;
    czyBlad = cin.fail();
  }

  cout << "Podana liczba: " << a << endl;
  
  return 0;
}