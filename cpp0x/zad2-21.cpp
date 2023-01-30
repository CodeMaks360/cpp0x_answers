#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int losuj(int start, int stop)  {
  return (rand() % (stop - start + 1)) + start;
}

bool czyWylosowana(int wylosowana, int limit, int tab[])  {
  if(limit <= 0)
    return false;

  int i = 0;
  do{
    if(tab[i] == wylosowana)  {
      return true;
    }
    i++;
  }while(i < limit);
  
  return false;
}

void wypisz(int tab[], int limit)  {
  int i = 0;
  do{
    cout << "Liczba " << i + 1 << ".: " << tab[i] << endl;
    i++;
  }while(i < limit);
}

int main()  {
  srand(time(NULL));

  int start = 1, stop = 10, limit = 5, tab[limit], ileWylosowano = 0;
  do{
    int wylosowana = losuj(start, stop);
    
    if(czyWylosowana(wylosowana, limit, tab) == false)  {
      tab[ileWylosowano] = wylosowana;
      ileWylosowano++;
    }
  }while(ileWylosowano < limit);

  wypisz(tab, limit);
  
  return 0;
}