#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {10, 20, 30, 40, 50, 60};
    int n = 6, pos, value;

    cout << "Enter position to insert: ";
    cin >> pos;

    cout << "Enter value to insert: ";
    cin >> value;

    if (pos < 1 || pos > n + 1)
    {
        cout << "Invalid position";
        return 0;
    }

    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n++;

    cout << "Array after insertion:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Index is " << i
             << " value is " << arr[i] << "\n";
    }

    return 0;
}
