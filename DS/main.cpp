// menu-driven program to push names and pop in stack and display the stack
//Hello
#include <iostream>
using namespace std;
int top = -1;
void push(int stack[], int val)
{
    top++;
    stack[top] = val;
}
void pop(int stack[])
{
    top--;
}
void mid(int stack[])
{
    int lb = 0, ub = top;
    int mid = (lb + ub) / 2;
    cout << stack[mid] << endl;
}

int main()
{
    int n;
    cin >> n;
    int stack[n];
    if (n >= 3)
    {
        for (int i = 0; i < n; i++)
        {
            int data;
            cin >> data;
            push(stack, data);
        }
        mid(stack);
        pop(stack);
        mid(stack);
    }
}
