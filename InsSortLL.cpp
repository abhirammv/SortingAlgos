#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;

};
//Function to append elements to the beginning of the linked list
Node* push(Node* head, int data)
{
    Node* newNode = new Node;
    newNode->data = data;

    newNode->next = head;
    return newNode;

}

int main()
{

    return 0;

}