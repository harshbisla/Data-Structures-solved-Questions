
#include <bits/stdc++.h>
using namespace std;
 
/* structure of a linked list node */
struct Node
{
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void printList(struct Node* head)
{
    while (head != NULL)
    {
        cout << " " << head->data ;
        head = head->next;
    }
    cout << "\n" ;
}

void delLesserNodes(struct Node* &head)
{
	Node* temp=head;
	Node* prev=NULL;
	
	if(head==NULL)
	{
		return ;
	}
	while(temp!=NULL)
	{ 
		if(temp->next==NULL)
		{
			break;
		}
		Node* n=temp->next;
		if(n->data > temp->data)
		{
			if(prev==NULL)//deleting first
			{
				Node* x=temp;
				head=head->next;
				delete x;
			}
			else
			{
				Node *z=temp;
				prev->next=n;
				delete z;
			}
//			if(prev==NULL)
//				prev=head;
//			else
//			    prev=n;
			temp=n;
		}
		else
		{
			if(prev==NULL)
				prev=head;
			else
				prev=prev->next;
			temp=n;
		}
		
	}
}
int main()
{
    struct Node* head = NULL;
 
    /* Create following linked list
    12->15->10->11->5->6->2->3 */
    push(&head, 3);
    push(&head, 2);
    push(&head, 6);
    push(&head, 5);
    push(&head, 11);
    push(&head, 10);
    push(&head, 15);
    push(&head, 12);
 
    cout << "Given Linked List \n" ;
    printList(head);
 
    delLesserNodes(head);
 
    cout << "Modified Linked List \n" ;
    printList(head);
 
    return 0;
}
