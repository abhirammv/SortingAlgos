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
    cout<<endl;
}

void insert(Node** head_sorted, Node* newNode)
{
    if(*head_sorted == NULL || newNode->data <= (*head_sorted)->data)
    {
        newNode->next = *head_sorted;
        *head_sorted = newNode;

    }

    else
    {
        Node* start = *head_sorted;
        while(start->next!=NULL && start->next->data <= newNode->data)
            start = start->next;

        newNode->next = start->next;
        start->next = newNode;
    }

}


void InsertionSort(Node** head)
{
    Node* sorted = NULL;
    Node* start = *head;

    while(start!=NULL)
    {
        Node* next = start->next;
        insert(&sorted, start);
        start = next;

    }

    *head = sorted;
}


int main()
{
    Node* l1 = NULL;

    push(&l1, 5);
    push(&l1, 20);
    push(&l1, 4);
    push(&l1, 3);
    push(&l1, 30);
    cout<<"Initial List:"<<endl;
    PrintList(l1);
    cout<<endl<<"Sorted: "<<endl;
    InsertionSort(&l1);
    PrintList(l1);

    return 0;

}