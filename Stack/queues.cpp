#include <iostream>
#include <queue>
using namespace std;

class Stack
{
    queue<int> q1;
    queue<int> q2;

public:
    void push(int value)
    {
        q2.push(value);

        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }

        swap(q1, q2);

        cout << value << " pushed" << endl;
    }

    int pop()
    {
        int res;

        if (q1.empty())
            cout << "Stack is empty";

        res = q1.front();

        q1.pop();

        return res;
    }

    int top()
    {
        if (q1.empty())
            cout << "Stack is empty";

        return q1.front();
    }
};

int main()
{
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    cout << "Top of stack is " << s.top() << endl;
    cout << s.pop() << " popped" << endl;
    cout << s.pop() << " popped" << endl;
    cout << "Top of stack is " << s.top() << endl;

    return 0;
}