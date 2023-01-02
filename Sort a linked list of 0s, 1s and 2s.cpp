#include <bits/stdc++.h>
using namespace std;
 
/* Link list node */
class Node
{
    public:
    int data;
    Node* next;
};



void push (Node** head_ref, int new_data)
{
    /* allocate node */
    Node* new_node = new Node();
 
    /* put in the data */
    new_node->data = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref) = new_node;
}
 
/* Function to print linked list */
void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}
void sortList(Node *head)
{
	int a[3]={0,0,0};
	Node*temp=head;
	while(temp)
	{
		a[temp->data]++;
		temp=temp->next;
	}
	temp=head;
	int i=0;
	while(temp)
	{
		if(a[i]==0)
			i++;
		temp->data=i;
		a[i]--;
		temp=temp->next;
	}
	
}
int main(void)
{
    Node *head = NULL;
    push(&head, 0);
    push(&head, 1);
    push(&head, 0);
    push(&head, 2);
    push(&head, 1);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);
    push(&head, 2);
 
    cout << "Linked List Before Sorting\n";
    printList(head);
 
    sortList(head);
 
    cout << "Linked List After Sorting\n";
    printList(head);
 
    return 0;
}

