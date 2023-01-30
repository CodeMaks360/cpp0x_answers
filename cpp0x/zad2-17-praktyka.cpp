#include <iostream>

using namespace std;

void moja_funkcja()  {
  cout << "[1] - dodawanie" << endl;
  cout << "[2] - odejmowanie" << endl;
  cout << "[0] - wyjscie z programu" << endl;
}

void dodawanie(float a, float b)  {
  cout << a << " + " << b << " = " << a + b << endl;
}

void odejmowanie(float a, float b)  {
  cout << a << " - " << b << " = " << a - b << endl;
}

float wczytajA()  {
        float a = 0;
        cout << "Liczba 1: "; cin >> a;
        bool czyBlad = cin.fail();
        while(czyBlad == 1)  {
          cin.clear();
          cin.ignore(1000, '\n');
          cout << "Podano bledne dane, prosze sprobowac ponownie: "; cin >> a;
          czyBlad = cin.fail();
        }

  return a;
}

float wczytajB()  {
        float b = 0;
        cout << "Liczba 2: "; cin >> b;
        bool czyBlad = cin.fail();
        while(czyBlad == 1)  {
          cin.clear();
          cin.ignore(1000, '\n');
          cout << "Podano bledne dane, prosze sprobowac ponownie: "; cin >> b;
          czyBlad = cin.fail();
        }

  return b;
}

int main()  {
  cout << "W programie sa dostepne nastepujace opcje:" << endl;
  moja_funkcja();
  cout << "Zycze przyjemnego korzystania z programu" << endl << endl;
  
  int liczba;
  float a = 0, b = 0;
  do  {
        cout << "Podaj dwie liczby: " << endl;

        a = wczytajA();
        b = wczytajB();
        
        moja_funkcja();
        cin >> liczba;
        switch(liczba)  {
        case 1:
            dodawanie(a, b);
            break;
        case 2:
            odejmowanie(a, b);
            break;
            default:
            break;
        }
    }  while(liczba != 0);
    return 0;
}