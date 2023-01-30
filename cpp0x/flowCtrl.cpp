#include <iostream>

using namespace std;

int main()  {
  cout << "Podaj 3 liczby rzeczywiste:" << endl;

  float a;
  cin >> a;
  bool aErr = cin.fail();
  cin.clear();
  cin.ignore(1000, '\n');
  
  float b;
  cin >> b;
  bool bErr = cin.fail();
  cin.clear();
  cin.ignore(1000, '\n');
  
  float c;
  cin >> c;
  bool cErr = cin.fail();
  cin.clear();
  cin.ignore(1000, '\n');
  
  cout << "Liczba 1: " << a << ". Blad? " << aErr << endl;
  cout << "Liczba 2: " << b << ". Blad? " << bErr << endl;
  cout << "Liczba 3: " << c << ". Blad? " << cErr << endl;
  return 0;
}