#include <iostream>

using namespace std;

int main()  {
  bool czyBlad;

  cout << "Kalkulator. Podaj liczbe rozna od 0" << endl;
  
  int wynik = 0;
  int dzialanie = 0;
  do  {
    cout << "\nWynik: " << wynik << endl;
    float A;
    cout << "Liczba: "; cin >> A;
    czyBlad = cin.fail();
    while(czyBlad == 1) {
      cin.clear();
      cin.ignore(1000, '\n');
      cout << "Nieprawidlowe dane, prosze sprobowac ponownie: "; cin >> A;
      czyBlad = cin.fail();
    }

    if(A == 0) {
      cout << "Wprowadzono " << A << ", koniec programu" << endl;
      return 0;
    }
    
    cout << "\n[1] Dodawanie" << endl;
    cout << "[2] Odejmowanie" << endl;
    cout << "[3] Mnożenie" << endl;
    cout << "[4] Dzielenie" << endl;
    cout << "[5] Rezygnuj" << endl;
    cout << "\nWybierz dzialanie: "; cin >> dzialanie;
    czyBlad = cin.fail();
    while(czyBlad == 1) {
      cin.clear();
      cin.ignore(1000, '\n');
      cout << "Nieprawidlowe dane, prosze sprobowac ponownie: "; cin >> dzialanie;
      czyBlad = cin.fail();
    }
  
      switch(dzialanie) {
          case 1:
            cout << "Wybrano dodawanie" << endl;
            wynik += A;
            break; 
            
          case 2:
            cout << "Wybrano odejmowanie" << endl;
            wynik -= A;
            break; 
 
            case 3:
              cout << "Wybrano mnozenie" << endl;
              wynik *= A;
              break; 
            
            case 4:
              cout << "Wybrano dzielenie" << endl;
              wynik /= A;
              break; 
            case 5:
              cout << "Zrezygnowano" << endl;
              return 0;
              break; 
            default:
              cout << "Wybrano nieprawidlowy znak, prosze sprobowac ponownie" << endl;
              break;
    }
    
  }while(dzialanie != 0);
  
    return 0;
}