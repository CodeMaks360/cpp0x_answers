#include <iostream>
#include <string>

using namespace std;

int main()
{
    int limit = 10;
    string tab[limit];
    
    for(int i = 0; i < limit; i++)  {
        cin >> tab[i];
    }
    
    for(int i = 0; i < limit; i++)  {
        cout << tab[i];
        if(i != 9)
            cout << ", ";
    }

    return 0;
}
