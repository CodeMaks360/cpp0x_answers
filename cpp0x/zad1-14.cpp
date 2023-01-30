#include <iostream>

using namespace std;

int main()  {
  bool czyBlad;

  cout << "Kalkulator prosty, Podaj dwie liczby A oraz B, na których wykonane zostanie wybrane dzialanie" << endl;

  float A;
  cout << "Liczba A: "; cin >> A;
  czyBlad = cin.fail();
  while(czyBlad == 1) {
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Nieprawidlowe dane, prosze sprobowac ponownie: "; cin >> A;
    czyBlad = cin.fail();
  }
  
  float B;
  cout << "Liczba B: "; cin >> B;
  czyBlad = cin.fail();
  while(czyBlad == 1) {
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Nieprawidlowe dane, prosze sprobowac ponownie: "; cin >> B;
    czyBlad = cin.fail();
  }

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