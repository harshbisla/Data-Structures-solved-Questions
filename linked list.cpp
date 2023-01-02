#include<iostream>
#include<stdlib.h>
using namespace std;;
class Node
{
	public:
	int data;
	Node* next;
};


//func to print linked list
print(Node *ptr)
{
	while(ptr!=NULL)
	{
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
}


//func to insert element at head
Node* iah(Node *h,int d)
{
	Node* ptr;
	ptr=(Node*)malloc(sizeof(Node));
	ptr->data=d;
	ptr->next=h;
	h=ptr;
	return h;
}


//func to insert element at tail
Node* iat(Node * h,int d)
{
	Node *p;
	p=h;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	Node* ptr;
	ptr=(Node*)malloc(sizeof(Node));
	ptr->data=d;
	
	p->next=ptr;
	ptr->next=NULL;
	return h;
	
}





//func to insert element at index
Node* iai(Node* h,int i,int d)
{
	Node*p=h;
	for(int j=1;j<i;j++)
	{
		p=p->next;
	}
	Node *ptr;
	ptr=(Node*)malloc(sizeof(Node));
	ptr->data=d;
	ptr->next=p->next;
	p->next=ptr;
	return h;
	
	
}
 
int main()
{
	Node *head,*b,*tail;
	head=(Node*)malloc(sizeof(Node));
	b=(Node*)malloc(sizeof(Node));
	tail=(Node*)malloc(sizeof(Node));
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//nodes initalization
	head->data=10;
	head->next=b;
	//
	b->data=20;
	b->next=tail;
	//
	tail->data=30;
    tail->next=NULL;
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	head=iah(head,-10);
	head=iat(head,40);
	head=iai(head,2,50);
	print(head);
	
	
}
