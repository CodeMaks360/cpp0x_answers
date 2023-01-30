#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

string konwertuj(string sTekst)  {
  string sWynik, change[2] = {"[b]", "[/b]"}, lookFor[2] = {"<b>", "</b>"};
  char c_lookFor = 32;

  sWynik.insert(0, sTekst);

  for(int i = 0; i < (sizeof(lookFor) / sizeof(lookFor[0])); i++)  {
    size_t pos = sWynik.find(lookFor[i]);
    while(pos != string::npos)  {
      sWynik.erase(pos, lookFor[i].size());
      sWynik.insert(pos, change[i]);
      pos = sWynik.find(lookFor[i], pos + 1);
    }
  }
  
    size_t pos = sWynik.find(c_lookFor);
    while(pos != string::npos)  {
      int count = 0;
      while(sWynik[pos] == sWynik[pos + count + 1])   {
        count++;
      }
      sWynik.erase(pos, count);
      pos = sWynik.find(c_lookFor, pos + 1);
    }

  return sWynik;
}

int main()  {
  cout << konwertuj( "<b>to jest </b> testowy       napis     <b>:)" ) << endl;
  cout << konwertuj("  s       a         m      e         sp    a   c j    e") << endl;
  cout << konwertuj("<<B><//b><i></i>") << endl;
    return 0;
}