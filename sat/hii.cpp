#include <iostream>

using namespace std;

// Represent a node of the doubly linked list

struct node
{
    int data;
    struct node *previous;
    struct node *next;
};

struct node *head, *back = NULL;

void insert(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;

    if (head == NULL)
    {
        head = back = newNode;
        head->previous = NULL;
        back->next = NULL;
    }
    else
    {
        back->next = newNode;
        newNode->previous = back;
        back = newNode;
        back->next = NULL;
    }
}

void DeleteDuplicateNode()
{
    // Node current will point to head
    struct node *current, *index, *temp;

    // Checks whether list is empty
    if (head == NULL)
    {
        return;
    }
    else
    {
        for (current = head; current != NULL; current = current->next)
        {
            for (index = current->next; index != NULL; index = index->next)
            {
                if (current->data == index->data)
                {
                    temp = index;
                    index->previous->next = index->next;
                    if (index->next != NULL)
                        index->next->previous = index->previous;
                    temp = NULL;
                }
            }
        }
    }
}

void display()
{
    struct node *current = head;
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    while (current != NULL)
    {
        cout << (current->data) << ",";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    // Add nodes to the list
    insert(1);
    insert(2);
    insert(3);
    insert(2);
    insert(2);
    insert(4);
    insert(5);
    insert(3);

    cout << "Originals list: ";
    display();

    cout << endl;

    // Removes duplicate nodes
    DeleteDuplicateNode();

    cout << "List after removing duplicates: ";
    display();
    cout << endl;

    return 0;
}
