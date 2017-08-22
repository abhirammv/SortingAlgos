#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;

};

//Function to append elements to the beginning of the linked list
void push(Node** head, int data)
{
    Node* newNode = new Node;
    newNode->data = data;

    newNode->next = *head;
    *head = newNode;

}

//Function to print the list
void PrintList(Node* head)
{
    Node* start = head;
    while(start!=NULL)
    {
        cout<<start->data<<" ";
        start = start->next;
    }
}

int main()
{
    Node* l1 = NULL;
    push(&l1, 5);
    push(&l1, 20);
    push(&l1, 4);
    push(&l1, 3);
    push(&l1, 30);
    PrintList(l1);
    return 0;

}