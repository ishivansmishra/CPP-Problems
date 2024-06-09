#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int a;
  cout << "Enter The First Value : " << endl;
  cin >> a;

  int b;
  cout << "Enter the second Value : " << endl;
  cin >> b;

  cout << "The Logical And Operator  is : " << (a && b) << endl;
  cout << "The Logical Or Operator is : " << (a || b) << endl;
  cout << "The Logical Not Operator is :  " << (!a) << endl
       << (!b) << endl;

  return 0;
}
