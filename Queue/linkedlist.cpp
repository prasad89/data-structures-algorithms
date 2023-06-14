#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

Node *front = NULL;
Node *rear = NULL;

void enqueue(int value)
{
    Node *newNode = (Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (front == NULL && rear == NULL)
        front = rear = newNode;
    else
    {
        rear->next = newNode;
        rear = newNode;
    }

    cout << value << " enqueued" << endl;
}

int dequeue()
{
    int res;

    if (front == NULL)
        cout << "Queue is empty" << endl;
    else
    {
        Node *temp = front;
        res = temp->data;
        front = front->next;
        free(temp);
        return res;
    }
}

void display()
{
    if (front == NULL && rear == NULL)
        cout << "Queue is empty" << endl;
    else
    {
        Node *temp = front;
        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
}

int main()
{
    display();
    enqueue(5);
    enqueue(6);
    enqueue(7);
    display();
    cout << dequeue() << " dequeued" << endl;
    cout << dequeue() << " dequeued" << endl;
    display();

    return 0;
}