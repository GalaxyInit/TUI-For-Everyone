#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c;
float r;

    cout<<"Enter the value of a,b,c";
    cin>>a>>b>>c;
    r=(-b+sqrt(b*b-4*a*c))/(2*a);
    cout<<"The root is "<<r;
    return 0;
}
