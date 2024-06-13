#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter The 3 Number : " << endl;
    cin >> a >> b >> c;

    int largest;

    if (a > b && a > c)
    {
        largest = a;
    }

    else if (b > a && b > c)
    {
        largest = b;
    }

    else
    {
        largest = c;
    }

    cout << largest << " " << "is the largest number";

    return 0;
}