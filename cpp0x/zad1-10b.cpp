#include <iostream>

using namespace std;

int main()  {
  cout << "Podaj 2 liczby rzeczywiste:" << endl;

  float a;
  cin >> a;
  bool aErr = cin.fail();
  while(aErr == 1){
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Nieprawidlowa wartosc, prosze sprobowac ponownie: ";
    cin >> a;
    aErr = cin.fail();
  };
  
  float b;
  cin >> b;
  bool bErr = cin.fail();
  while(bErr == 1){
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Nieprawidlowa wartosc, prosze sprobowac ponownie: ";
    cin >> b;
    bErr = cin.fail();
  };

  cout << a << " + " << b  << " = " << a + b << endl;
  cout << a << " - " << b  << " = " << a - b << endl;
  cout << a << " * " << b  << " = " << a * b << endl;
  cout << a << " / " << b  << " = " << a / b << endl;

  return 0;
}