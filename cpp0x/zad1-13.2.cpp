#include <iostream>

using namespace std;

int main()  {
    int wiek;
    cin >> wiek;
    if(wiek >= 18 && wiek <= 100)  {
        cout << "Twierdzisz, ze jestes pelnoletni..." << endl;
        cout << "ale czy to kogos interesuje? :)" << endl;
    }
    cout << "Koniec" << endl;
    return 0;
  }