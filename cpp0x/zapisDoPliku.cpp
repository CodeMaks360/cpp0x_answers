#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::fstream;
using std::ofstream;
using std::to_string;
using std::string;

int main() {
  int start = 0, stop = 0;
  
  string addon = "_1";
  cout << "Podaj liczbe startowa: ";
  cin >> start;
  cout << "Podaj liczbe koncowa: ";
  cin >> stop;

  ofstream outfile("karty.txt");
  
  for(int i = start; i <= stop; i++)  {
    outfile << to_string(i) + addon << endl;
  }

  outfile.close();
}