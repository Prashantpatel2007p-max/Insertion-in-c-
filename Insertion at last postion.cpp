#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {10, 20, 30, 40, 50, 60};
    int n = 6, value;

    cout << "Enter value to insert: ";
    cin >> value;

    arr[n] = value;
    n++;

    cout << "Array after insertion:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Index is " << i
             << " value is " << arr[i] << "\n";
    }

    return 0;
}
