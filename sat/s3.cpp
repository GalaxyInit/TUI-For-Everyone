#include <iostream>

using namespace std;

// void print_arr(int arr[], int n)

// OR two ways to use array for function!

void print_arr(int *arr, int n)

{
    arr[0] = 100;

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {1,
                 2,
                 3,
                 4,
                 5,
                 6,
                 7,
                 8,
                 9,
                 10};

    int n = sizeof(arr) / sizeof(int);

    cout << "Size of Array is : " << n << endl;
    cout << endl;

    // print_arr(arr, n); // If I call it hear than the value at arr[0] will be changed to 100
    // Because array follows Call by Reference.

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << endl;
    }
    cout << endl;

    print_arr(arr, n);

    return 0;
}
