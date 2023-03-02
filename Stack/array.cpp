#include <iostream>
using namespace std;

int stack[100];
int n;
int top = -1;

void push(int value)
{
    if (top == n)
        cout << "Stack is full" << endl;
    else
    {
        stack[++top] = value;
        cout << value << " pushed" << endl;
    }
}

void display()
{
    if (top == -1)
        cout << "Stack is empty" << endl;
    else
    {
        for (int i = top; i >= 0; i--)
            cout << stack[i] << endl;
    }
}

int pop()
{
    if (top == -1)
        cout << "Stack is empty" << endl;
    else
        return stack[top--];
}

int main()
{
    cout << "Enter size of stack: ";
    cin >> n;

    display();
    pop();
    push(5);
    push(6);
    push(7);
    display();
    cout << pop() << " popped" << endl;
    cout << pop() << " popped" << endl;
    push(3);
    display();

    return 0;
}