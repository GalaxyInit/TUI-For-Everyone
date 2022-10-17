#include <iostream>

using namespace std;

void bubble_sort(int arr[], int n)
{

    for (int time = 1; time <= n - 1; time++)
    {

        for (int j = 0; j <= n - time - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{

    int arr[] = {23, 1, 4, 2, 5, 63, 8, 9, 10, 7, 6, 5, 2, 3, 4};
    int n = sizeof(arr) / sizeof(int);

    bubble_sort(arr, n);

    for (auto x : arr)
    {

        cout << x << " , ";
    }

    cout << endl;

    return 0;
}
