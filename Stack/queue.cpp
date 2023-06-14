#include <iostream>
#include <queue>
using namespace std;

class Stack
{
    queue<int> q;

public:
    void push(int value)
    {
        q.push(value);

        for (int i = 0; i < q.size() - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }

        cout << value << " pushed" << endl;
    }

    int pop()
    {
        int res;

        if (q.empty())
            cout << "Stack is empty";

        res = q.front();

        q.pop();

        return res;
    }

    int top()
    {
        if (q.empty())
            cout << "Stack is empty";

        return q.front();
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