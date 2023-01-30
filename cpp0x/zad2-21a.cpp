#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

void wczytaj(int limit, int tab[])  {
  int i = 0;
  bool cinFail = 0;
  do{
    cout << "Podaj " << i + 1 << " liczbe: "; cin >> tab[i];
    cinFail = cin.fail();
    while(cinFail == true)  {
      cin.clear();
      cin.ignore(numeric_limits<streamsize> ::max(), '\n');
      cout << "Podano bledne dane, prosze sprobowac ponownie: "; cin >> tab[i];
      cinFail = cin.fail();
    }
    i++;
  }while(i < limit);
}

bool czyWylosowana(int wylosowana, int ileWylosowano, int tabi[])  {
  if(ileWylosowano <= 0)
    return false;

  int i = 0;
  do{
    if(wylosowana == tabi[i])  {
      return true;
    }

    i++;
  }while(i <= ileWylosowano);

  return false;
}

int main()  {
  srand(time(NULL));
  int limit = 3, tab[limit], tabi[limit], start = 0, wylosowana = 0, ileWylosowano = 0, ileWypisac = 3;
  
  wczytaj(limit, tab);

  do{
    wylosowana = ((rand() % limit - start + 1) + start) - 1;
    if(czyWylosowana(wylosowana, ileWylosowano, tabi) == false)    {
      tabi[ileWylosowano] = wylosowana;
      ileWylosowano++;
    }
  }while(ileWylosowano < limit);

  int i = 0;
  do{
    cout << "Wylosowano: " << tabi[i] << endl;
    cout << "Liczba z tablicy: " << tab[tabi[i]] << endl;
    i++;
  }while(i < ileWypisac);
  
  return 0;
}