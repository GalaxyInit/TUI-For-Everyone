#include <iostream>

using namespace std;

int main()
{

    int n;

    int marks[100];

    cout << "Enter the number of student : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Student No. " << i << endl;
        cin >> marks[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Student No. " << i << " : " << marks[i] << endl;
    }

    cout << endl;

    return 0;
}
