#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Linked
{
    Node *head;

public:
    Linked()
    {
        head = NULL;
    }
    void insertNode(int);

    void printlist();

    void deleteNode(int);
};

void Linked::deleteNode(int nodeOfset)
{
    Node *temp1 = head, *temp2 = NULL;
    int Listlen = 0;

    if (head == NULL)
    {
        cout << "List empty" << endl;
        return;
    }

    while (temp1 != NULL)
    {
        temp1 = temp1->next;
        Listlen++;
    }
    if (Listlen < nodeOfset)
    {
        cout << "Index out of ranege" << endl;
        return;
    }

    temp1 = head;

    if (nodeOfset == 1)
    {
        head = head->next;
        delete temp1;
        return;
    }

    while (nodeOfset-- > 1)
    {
        temp2 = temp1;
        temp1 = temp1->next;
    }
    temp2->next = temp1->next;
    delete temp1;
}

void Linked::insertNode(int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void Linked::printlist()
{
    Node *temp = head;

    // Check for empty list.
    if (head == NULL)
    {
        cout << "List empty" << endl;
        return;
    }

    // Traverse the list.
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Linked list1;

    // Inserting nodes
    list1.insertNode(1);
    list1.insertNode(2);
    list1.insertNode(3);
    list1.insertNode(4);

    cout << "Elements of the list are: ";

    // Print the list
    list1.printlist();
    cout << endl;

    // Delete node at position 2.
    list1.deleteNode(2);
    list1.printlist();
}