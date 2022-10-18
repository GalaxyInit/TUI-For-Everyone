#include <iostream>
using namespace std;

void move(int n, char S,
char D, char A)
{
if (n == 1)
{
cout << "Move disk 1 from rod " <<S <<
" to rod " << D<<endl;
return;
}
move(n - 1, S, A, D);
cout << "Move disk " << n << " from rod " <<S <<
" to rod " << D << endl;
move(n - 1, A, D, S);
}

// Driver code
int main()
{
int n ; // Number of disks
cout<<"enter number of disks";
cin>>n;
move(n, 'A', 'C', 'B'); // A, B and C are names of rods
return 0;
}
