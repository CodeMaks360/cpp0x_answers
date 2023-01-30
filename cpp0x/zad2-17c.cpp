#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()  {
    srand(time(NULL));

    int random = (rand() % 11) + 50;
    cout << "Wylosowana liczba: " << random << endl; 
    return 0;
}