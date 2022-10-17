#include <iostream>

using namespace std;

void reverse_array(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(arr[s], arr[e]);
        s += 1;
        e -= 1;
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    int n = sizeof(arr) / sizeof(int);

    cout << "The elements of the array are : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    reverse_array(arr, n);

    cout << "The elements of the reverse array are : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
