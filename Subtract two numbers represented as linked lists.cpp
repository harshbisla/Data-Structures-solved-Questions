#include <bits/stdc++.h>
using namespace std;
 
/* structure of a linked list node */
struct Node
{
    int data;
    struct Node* next;
};
int len(Node* Node)
{
    int size = 0;
    while (Node != NULL) {
        Node = Node->next;
        size++;
    }
    return size;
}

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
Node* convert_to_ll(int x)
{
	
	int s=0;
	Node * sol=NULL;
	if(x==0)
	{
		push(&sol, 0);
	}
	while(x>10)
	{
		push(&sol, x%10);
		x=x/10;
	}
	push(&sol,x);
	return sol;
	
}
/////////////////////////////////////////////////////////
Node* subtract(Node *list1,Node * list2)
{
	int s1=len(list1);
	int s2=len(list2);
	Node* temp=list1;
	int x1=0;
	int x2=0;
	for(int i=s1;i>0;i--)
	{
		x1=x1+temp->data*pow(10,i-1);
		temp=temp->next;
    }
    temp=list2;
    	for(int i=s2;i>0;i--)
	{
		x2=x2+temp->data*pow(10,i-1);
		temp=temp->next;
    }
    //till here both ll are converted into integers
    int x=abs(x1-x2);
    return convert_to_ll(x);
}

int main()
{
    struct Node* list1 = NULL;
    struct Node* list2 = NULL;
 
    push(&list1, 6);
    push(&list1, 2);
    push(&list1, 3);
    push(&list2, 0);
    push(&list2, 1);
    push(&list2, 5);
    
    cout << "First  number\n" ;
    printList(list1);
    cout<<endl;
    cout << "Second  number\n" ;
    printList(list2);
    cout<<endl;
    cout << "Subtracted  number\n" ;
    printList(subtract(list1,list2));
    cout<<endl;
    
}

