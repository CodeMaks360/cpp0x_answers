#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int wylosuj(int start,int stop)  {
  int random = (rand() % (stop - start + 1)) + start;
  return random;
}

int main()
{
    srand(time(NULL));
    int start;
    cin >> start;
    int stop;
    cin >> stop;
    int ile = 20;
    do  {
        cout << "Liczba " << ile << ". :";
        cout << wylosuj(start, stop) << endl;
        ile--; 
    } while( ile > 0 );
   
    return 0;
}