#include <iostream>

#include <iomanip>

using namespace std;

int main()
{
    int n;
    cout << "Enter The Number : " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}