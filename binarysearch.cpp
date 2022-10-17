#include <iostream>
using namespace std;

int main()
{
    int a[20], low, mid, high, n, no;
    cout << "Enter no. of elements:";
    cin >> n;
    cout << "Enter sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the number you want to search:";
    cin >> no;
    low = 0;
    high = n - 1;
    while (low <= high)
    {

        mid = (low + high) / 2;
        if (no = a[mid])
        {
            cout << "Location is: " << mid + 1;
            break;
        }

        else if (no < a[mid])
        {
            high = mid - 1;
        }

        else if (no > a[mid])
        {
            low = mid + 1;
        }
    }

    return 0;
}