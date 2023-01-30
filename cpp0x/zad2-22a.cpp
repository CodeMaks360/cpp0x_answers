#include <iostream>

using namespace std;

void wypiszTablice( int tablica[], int ile )
{
    int indeks = 0;
    do{
      cout << tablica[ indeks ] << endl;
      indeks++;
      }while(indeks < ile);
}

int sumujLiczby( int tablica[], int ile )
{
    int oblicz = 0, indeks = 0;
    do{
      oblicz += tablica[indeks];
      indeks++;
      }while(indeks < ile);
   
    return oblicz;
}

int main()
{
    int dane[ 5 ];
    dane[ 0 ] = 11;
    dane[ 1 ] = 5;
    dane[ 2 ] = 7;
    dane[ 3 ] = 8;
    dane[ 4 ] = 2;
    wypiszTablice( dane, 5 );
    int wynik = sumujLiczby( dane, 5 );
    cout << "Suma liczb wynosi = " << wynik << endl;
    return 0;
 }