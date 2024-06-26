#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter The Number : " << endl;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    int product = 1;
    int differance = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        product *= arr[i];
        differance -= arr[i];
    }
    cout << sum << endl;
    cout << product << endl;
    cout << differance << endl;

    return 0;
}
