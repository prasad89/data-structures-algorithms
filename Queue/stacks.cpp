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
        while (!ip.empty())
        {
            op.push(ip.top());
            ip.pop();
        }

        ip.push(value);
        cout << value << " enqueued" << endl;

        while (!op.empty())
        {
            ip.push(op.top());
            op.pop();
        }
    }

    int dequeue()
    {
        int res;

        if (ip.empty())
            cout << "Queue is empty";

        res = ip.top();
        ip.pop();

        return res;
    }

    int front()
    {
        if (ip.empty())
            cout << "Queue is empty";

        return ip.top();
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