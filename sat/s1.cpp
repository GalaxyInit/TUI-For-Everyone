#include <iostream>

using namespace std;

int largestSubarraySum(int array[], int n)
{

    int cs = 0;
    int ms = 0;

    for (int i = 0; i < n; i++)
    {

        cs = cs + array[i];
        if (cs < 0)
        {
            cs = 0;
        }

        ms = max(ms, cs);
    }

    return ms;
}

int main()
{

    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};

    int n = sizeof(arr) / sizeof(int);

    cout << "The largest Subarray Sum is : " << largestSubarraySum(arr, n) << endl;

    return 0;
}
