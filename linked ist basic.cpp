//linked list
#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		
		//make constructor
		node(int data)
		{
			this->data=data;
			next=NULL;
		}
};
void insert_at_tail(node * &head, int val)//inserting at tail
{
	node * n=new node(val);
	if(head==NULL)
	{
		head=n;
		return ;
	}
	node *temp= head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=n;
}

void insert_at_head(node * &head,int val)//inserting at head
{
	node* n=new node(val);
	if(head==NULL)
	{
		head=n;
		return ;
	}
	n->next=head;
	head=n;
}

//display function to print linked list
void display(node* head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

//for searching an element in ll
void search(node * head,int key)
{
	node*temp=head;
	int x=1;
	while(temp!=NULL)
	{
		if(temp->data==key)
		{
			cout<<"Key "<<key <<" found at "<<x<<endl;
			return ;
		}
		x++;
		temp=temp->next;
	}
	cout<<"not found"<<endl;
}
//deletion in linked list
void deletion(node * &head,int key)
{
	node* temp=head;
	if(head==NULL)
	{
		cout<<"linked list already empty"<<endl;
		return ;
	}
	if(head->data==key)
	{
		node * to_del=head;
	    head=head->next;
	    delete to_del;
	    return ;
	}
	while((temp->next)->data!=key)
	{
		temp=temp->next;
	}
	node * to_del=temp->next;
	temp->next=temp->next->next;
	delete to_del;
	return ;
}
void reverse_ll(node* &head)//using iterative method
{
	node * prev=NULL;
	node * current=head;
	node * n;
	if(head->next==NULL)
	{
		return;
	}
	while(current !=NULL)
	{
		n=current->next;
		current->next=prev;
		prev=current;
		current=n;
	}
	head=prev;
}

node * rev_ll_rec(node* &head)//using recursive method
{
	if(head->next==NULL || head==NULL)
	{
		return head;
	} 
	node *small=rev_ll_rec(head->next);
	head->next->next=head;
	head->next=NULL;
	return small;
}

node *rev_k(node * &head ,int k)//reversal of k nodes
{
	node * prev = NULL;
	node * curr=head;
	node*n;
    int count =0;
    while(curr!=NULL && count <k)
	{
		n=curr->next;
		curr->next=prev;
		prev=curr;
		curr=n;
		count ++;
	}
	if(n!=NULL)
	{
		node * x=rev_k(n,k);
	    head->next=x;
	}
	return prev;
	
}
void appendk(node * &head,int k)
{
	int c =1;
	node* temp=head;
	while(temp->next!=NULL)
	{
		c++;
		temp=temp->next;
	}
	int x=c-k;
	if(x<0)
	{
		return;
	}
	c=1;
	node* a=head;
	while(c<x)
	{
		a=a->next;
		c++;
	}
	temp->next=head;
	head=a->next;
	a->next=NULL;
}
int find_intersection(node * h1,node * h2)
{
	int l1=1;
	int l2=1;
	node* temp=h1;
	while(temp->next!=NULL)
	{
		l1++;
		temp=temp->next;
	}
	temp=h2;
	while(temp->next!=NULL)
	{
		l2++;
		temp=temp->next;
	}
	node* ptr1=h1;
	node* ptr2=h2;
	if(l1>l2)
	{
		int d=l1-l2;
		int x=1;

		while(x<=d)
			{
				ptr1=ptr1->next;
				x++;
			}
	}
	if(l1<l2)
	{
		int d=l2-l1;
		int x=1;
		while(x<=d)
			{
				ptr2=ptr2->next;
				x++;
			}
	}
		while(ptr1!=ptr2)
		{
			ptr1=ptr1->next;
			ptr2=ptr2->next;
		}
		return ptr1->data;
}
void even_odd(node * &head)
{
	node * odd=head;
	node * even=head->next;
	
	node*x=head->next;
	while(odd->next!=NULL && even->next!=NULL)
	{
		odd->next=odd->next->next;
		odd=odd->next;
		even->next=even->next->next;
		even=even->next;
	}
	odd->next=x;
	
}
int main()
{
	node *h1= NULL;
	node *h2= NULL;
	insert_at_tail(h1,1);
	insert_at_tail(h1,2);
	insert_at_tail(h1,3);
	insert_at_tail(h1,4);
	insert_at_head(h1,0);
	insert_at_tail(h2,7);
	insert_at_tail(h2,8);
	insert_at_tail(h2,9);
	insert_at_tail(h2,10);
	insert_at_tail(h2,11);
	insert_at_tail(h2,12);
	//search(head,22);
	cout<<endl;
//	deletion(head,0);
//	display(head);
//	cout<<endl;
////	head=rev_ll_rec(head);
//	display(head);
	//head=rev_k(head,2);
//	cout<<endl;
//	display(head);
    //appendk(head,2);
    display(h1);
    cout<<endl;
    display(h2);
//    cout<<find_intersection(h1,h2);//link nhi hua to intersectiion nhi aaega
    even_odd(h2);
    cout<<endl;
    display(h2);
}
