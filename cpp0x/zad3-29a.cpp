#include <iostream>

using std::cout;
using std::endl;

int main()
{
  for(int x = 0; x < 10; x++)  {
    cout << "x = " << x << endl;

    if(x == 7)  {
      cout << "Teraz 'x' wynosi " << x << "." << endl;
      cout << "Przerywam petle!" << endl;
      x = 10;
    }
  }
  
  cout << "Teraz jestem tu :)" << endl;
  
  return 0;
}