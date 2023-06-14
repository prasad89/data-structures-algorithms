#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;

void create()
{
    Node *temp = (Node *)malloc(sizeof(Node));
    cout << "Enter node data: ";
    cin >> temp->data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    else
    {
        Node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
};

void display()
{
    if (head == NULL)
    {
        cout << "Linked list is empty";
        return;
    }
    else
    {
        cout << "Linked List" << endl;
        Node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
    cout << endl;
};

void insert_begin()
{
    Node *temp = (Node *)malloc(sizeof(Node));
    cout << "Enter node data: ";
    cin >> temp->data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
};

void insert_pos()
{
    int pos;
    cout << "Enter position: ";
    cin >> pos;

    Node *temp = (Node *)malloc(sizeof(Node));
    cout << "Enter node data: ";
    cin >> temp->data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    else
    {
        Node *curr = head;
        Node *prev = head;
        for (int i = 0; i < pos; i++)
        {
            prev = curr;
            curr = curr->next;
        }
        temp->next = curr;
        prev->next = temp;
    }
}
void insert_end()
{
    Node *temp = (Node *)malloc(sizeof(Node));
    cout << "Enter node data: ";
    cin >> temp->data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    else
    {
        Node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
};

void delete_begin()
{
    if (head == NULL)
    {
        cout << "Linked list is empty";
        return;
    }
    else
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        cout << "Node is deleted";
    }
}

void delete_pos()
{
    int pos;
    cout << "Enter position: ";
    cin >> pos;

    if (head == NULL)
    {
        cout << "Linked list is empty";
        return;
    }
    else if (pos == 0)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        cout << "Node is deleted";
    }
    else
    {
        Node *curr = head;
        Node *prev = head;
        for (int i = 0; i < pos; i++)
        {
            prev = curr;
            curr = curr->next;
        }
        if (curr->next == NULL)
        {
            prev->next = NULL;
            free(curr);
            cout << "Node is deleted";
        }
        else
        {
            prev->next = curr->next;
            free(curr);
            cout << "Node is deleted";
        }
    }
}

void delete_end()
{
    if (head == NULL)
    {
        cout << "Linked list is empty";
        return;
    }
    else if (head->next == NULL)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        cout << "Node is deleted";
    }
    else
    {
        Node *curr = head;
        Node *prev = head;
        while (curr->next != NULL)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;
        free(curr);
        cout << "Node is deleted";
    }
}

int main()
{
    int choice;
    while (1)
    {
        cout << "\n*****\n";
        cout << "0. Create\n";
        cout << "1. Display\n";
        cout << "2. Insert Node at beginning\n";
        cout << "3. Insert Node in specific position\n";
        cout << "4. Insert Node at end of LinkedList\n";
        cout << "5. Delete Node at beginning\n";
        cout << "6. Delete Node at position\n";
        cout << "7. Delete Node at end\n";
        cout << "8. ** To exit **";
        cout << "\n\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            system("CLS");
            create();
            break;
        case 1:
            system("CLS");
            display();
            break;
        case 2:
            system("CLS");
            insert_begin();
            break;
        case 3:
            system("CLS");
            insert_pos();
            break;
        case 4:
            system("CLS");
            insert_end();
            break;
        case 5:
            system("CLS");
            delete_begin();
            break;
        case 6:
            system("CLS");
            delete_pos();
            break;
        case 7:
            system("CLS");
            delete_end();
            break;
        case 8:
            system("CLS");
            exit(0);
        default:
            system("CLS");
            cout << "\n Wrong Choice";
            break;
        }
    }
    return 0;
}