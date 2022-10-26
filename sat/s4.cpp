#include <iostream>

using namespace std;

int linear_search(int arr[], int n, int key)

// OR

// int linear_search(int *arr, int n, int key)

{
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 11, 22, 14, 7, 8, 20, 3, 9, 8, 5, 2};

    int n = sizeof(arr) / sizeof(int);

    int key;

    cout << "Enter the number for search : ";
    cin >> key;

    int index = linear_search(arr, n, key);

    if (index != -1)
    {
        cout << key << " Is present in the array at index : " << index << endl;
    }

    else
    {
        cout << key << " Is Not Found!  " << endl;
    }
    return 0;
}
