#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void wylosujLiczby (int * tablica, int limit, int start, int stop)  {
  int i = 0;
  do  {
    tablica[i] = (rand() % (stop - start + 1)) + 4;
    i++;
  }while(i < 999);
}

void wypiszLiczby(int * tablica, int limit)  {
  int i = 0;
  do  {
    cout << "Liczba " << i + 1 << ". " << tablica[i] << endl;
    i++;
  }while(i<999);
}

int obliczSume(int * tablica, int limit)  {
  int i = 0, suma = 0;

  do  {
    suma += tablica[i];
    i++;
  }while(i < 999);
  
  return suma;
}

int main() {
    srand(time(NULL));
    
    int limit = 999, tablica[limit], start = 4, stop = 10;

    wylosujLiczby(tablica, limit, start, stop);
    wypiszLiczby(tablica, limit);
    int iSuma = obliczSume(tablica, limit);
    cout << "Suma liczb wynosi: " << iSuma << endl;
      
    return 0;
}