#include <iostream>

using namespace std;

void wypelnienieTab(int limit, int tab[])  {
  int liczba = 1;
  for(int i = 0; i < limit; i++)  {
    tab[i] = liczba;
    liczba += 5;
  }
}

void wypisanieTab(int limit, int tab[])  {
  for(int i = 0; i < limit; i++)
    cout << "Liczba " << i + 1 << ": " << tab[i] << endl;
}

int main()
{
  int limit = 20, tab[limit];
  wypelnienieTab(limit, tab);
  wypisanieTab(limit, tab);
  
  return 0;
}