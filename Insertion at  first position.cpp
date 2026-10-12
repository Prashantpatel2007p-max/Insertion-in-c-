#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {10, 20, 30, 40, 50, 60};
    int n = 6, value;

    cout << "Enter value to insert: ";
    cin >> value;

    for (int i = n; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = value;
    n++;

    cout << "Array after insertion:\n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
