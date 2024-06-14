#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cout << "Enter The Number : " << endl;
    cin >> n;

    cout << "The Table of " << "" << n << " " << "is" << endl;
    for (int i = 1; i <= 10; i++)
    {

        cout << n << " " << "multiplies by" << " " << i << " " << n * i << endl;
    }

    return 0;
}