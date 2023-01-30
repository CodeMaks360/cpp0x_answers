#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    int strzaly = 0, odp = 0, random = (rand() % 1000) + 1;
    bool czyBlad;

    cout << random << endl;

    cout << "\nMysle o pewnej liczbie z przedzialu (1 ; 1000)" << endl; 
  
    
    do  {
      strzaly++;

      cout << "Zgadnij jaka to liczba: " << endl;
      cin >> odp;
      czyBlad = cin.fail();
      while(czyBlad == 1)  {  
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Podano niepoprawne dane. Prosze sprobowac ponownie: ";
        cin >> odp;
        czyBlad = cin.fail();
        strzaly++;
      };
      
      if(odp < random)  {
        cout << "Za malo! Spróbuj jeszcze raz!" << endl;
      }  else if(odp > random)  {
        cout << "Za duzo! Spróbuj jeszcze raz!" << endl;
      }  else  {
        cout << "Tak! Myslalem o " << random << "! Trafiles za " << strzaly << " razem!" << endl;
      }
    }while(odp != random);
}