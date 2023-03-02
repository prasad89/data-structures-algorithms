#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

Node *top = NULL;

void push(int value)
{
    Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;

    if (top == NULL)
        newNode->next = NULL;
    else
        newNode->next = top;

    top = newNode;

    cout << value << " pushed" << endl;
}

int pop()
{
    int res;

    if (top == NULL)
        cout << "Stack is empty" << endl;
    else
    {
        struct Node *temp = top;
        res = temp->data;
        top = top->next;
        free(temp);
    }

    return res;
}

void display()
{
    if (top == NULL)
        cout << "Stack is empty" << endl;
    else
    {
        struct Node *temp = top;
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