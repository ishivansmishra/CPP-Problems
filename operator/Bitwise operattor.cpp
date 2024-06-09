#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int a;
  cout << "Enter The First Value : " << endl;
  cin >> a;

  int b;
  cout << "Enter The Second Value : " << endl;
  cin >> b;

  cout << "The Bitwise And operator : " << (a & b) << endl;
  cout << "The Bitwise Or operator : " << (a | b) << endl;
  cout << "The Bitwise Xor operator : " << (a ^ b) << endl;
  cout << "The Bitwise complement : " << (~a) << endl
       << (~b) << endl;
  cout << "The Right Shift Operator : " << (a >> b) << endl;
  cout << "The Left Shift Operator : " << (a << b) << endl;

  return 0;
}
