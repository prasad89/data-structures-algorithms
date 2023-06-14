#include <iostream>
using namespace std;

int queue[100];
int n;
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == n - 1)
        cout << "Queue is full" << endl;

    else if (front == -1 && rear == -1)
    {
        front = 0;
        queue[++rear] = value;
        cout << value << " enqueued" << endl;
    }

    else
    {
        queue[++rear] = value;
        cout << value << " enqueued" << endl;
    }
}

int dequeue()
{
    if (front == -1 || front > rear)
        cout << "Queue is empty" << endl;

    else if (front == rear)
    {
        cout << queue[front] << " dequeued" << endl;
        front = rear = -1;
    }

    else
        return queue[front++];
}

void display()
{
    if (front == -1)
        cout << "Queue is empty" << endl;
    else
    {
        for (int i = front; i <= rear; i++)
            cout << queue[i] << endl;
    }
}

int main()
{
    cout << "Enter size of queue: ";
    cin >> n;

    display();
    enqueue(5);
    enqueue(6);
    enqueue(7);
    display();
    cout << dequeue() << " dequeued" << endl;
    cout << dequeue() << " dequeued" << endl;
    enqueue(3);
    display();

    return 0;
}