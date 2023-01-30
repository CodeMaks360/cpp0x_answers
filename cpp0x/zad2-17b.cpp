#include <iostream>

using namespace std;

float wczytajLiczbe()  {
  float liczba;
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

int main()  {
  bool czyBlad;

  cout << "Kalkulator prosty, Podaj dwie liczby A oraz B, na których wykonane zostanie wybrane dzialanie" << endl;

  cout << "Liczba A: ";
  float A = wczytajLiczbe();
  
  cout << "Liczba B: ";
  float B = wczytajLiczbe();

  cout << "Jakie dzialanie chcesz wykonac? Wpisz jeden ze znakow (+ | - | * | /) ponizej" << endl;
  char dzialanie;
  cin >> dzialanie;

      switch(dzialanie) {
          case '+':
            cout << "Wybrano dodawanie" << endl;
            cout << A << " + " << B << " = " << A + B << endl;
            break; 
          case '-':
            cout << "Wybrano odejmowanie" << endl;
            cout << A << " - " << B << " = " << A - B << endl;
            break; 
          case '*':
            cout << "Wybrano mnozenie" << endl;
            cout << A << " * " << B << " = " << A * B << endl;
            break; 
          case '/':
            cout << "Wybrano dzielenie" << endl;
            if(A == 0 || B == 0) {
              cout << "Nie wolno dzielic przez 0!" << endl;
              break;
            }
            cout << A << " / " << B << " = " << A / B << endl;
            break; 
          default:
            cout << "Wybrano nieprawidlowy znak, prosze sprobowac ponownie";
            break;
}

    return 0;
}