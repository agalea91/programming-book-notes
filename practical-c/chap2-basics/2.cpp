/* C++ code example */
#include <iostream>
using namespace std;

int main()
{
  int a;
  cout << "Enter a number";
  cin >> a;
  cin.ignore();
  cout << "a=" << a <<"\n";
  cout << "Terminate by pressing enter";
  cin.get();
}
