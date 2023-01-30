#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void losowanie(int limit, int tab[], int start, int stop)  {
  for(int i = 0; i < limit; i++)
    tab[i] = (rand() % (stop - start + 1)) + start;
}

void StE(int limit, int tab[])  {
  cout << "Wypisanie tablicy od poczatku do konca" << endl;
  for(int i = 0; i < limit; i++)
    cout << "Pozycja " << i + 1 << ": " << tab[i] << endl;
}

void EtS(int limit, int tab[])  {
  cout << "Wypisanie tablicy od konca do poczatku" << endl;
  for(int i = limit - 1; i > -1; i--)
    cout << "Pozycja " << i + 1 << ": " << tab[i] << endl;
}

int znajdzMin(int limit, int tab[])  {
  int min = tab[0];
  for(int i = 1; i < limit; i++)  {
    if(min > tab[i])
      min = tab[i];
  }

  return min;
}

int znajdzMax(int limit, int tab[])  {
  int max = tab[0];
  for(int i = 1; i < limit; i++)  {
    if(max < tab[i])
      max = tab[i];
  }

  return max;
}

int main()
{
  srand(time(NULL));

  int limit = 10, tab[limit], start = 10, stop = 30;

  losowanie(limit, tab, start, stop);
  StE(limit, tab);
  cout << endl;
  EtS(limit, tab);
  int min = znajdzMin(limit, tab);
  int max = znajdzMax(limit, tab);
  cout << "Najmniejsza liczba: " << min << endl;
  cout << "Najwieksza liczba: " << max << endl;
  
  return 0;
}