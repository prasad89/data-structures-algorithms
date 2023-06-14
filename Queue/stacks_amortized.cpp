#include <iostream>
#include <stack>
using namespace std;

class Queue
{
    stack<int> ip;
    stack<int> op;

public:
    void enqueue(int value)
    {
        ip.push(value);
        cout << value << " enqueued" << endl;
    }

    int dequeue()
    {
        int res;

        if (op.empty())
            while (ip.size())
            {
                op.push(ip.top());
                ip.pop();
            }

        res = op.top();
        op.pop();

        return res;
    }

    int front()
    {
        if (op.empty())
            while (ip.size())
            {
                op.push(ip.top());
                ip.pop();
            }

        return op.top();
    }
};

int main()
{
    Queue q;

    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    cout << "Front of the queue is " << q.front() << endl;
    cout << q.dequeue() << " dequeued" << endl;
    cout << q.dequeue() << " dequeued" << endl;
    cout << "Front of the queue is " << q.front() << endl;

    return 0;
}