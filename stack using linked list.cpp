//stack using linked list
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
};


void print(struct Node *top)
{
	while(top!=NULL)
	{
		cout<<"element is "<<top->data<<endl;
		top=top->next;
	}
}

int isempty(struct Node *top)
{
	if(top==NULL)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
	
}

int isfull(struct Node *top)
{
	struct Node *p;
	p=(struct Node*)malloc(sizeof(struct Node));
	if(p==NULL)
	{
		return 1;
	}
	else 
	{ 
	    return 0; 
	}
}

struct Node* push(struct Node *top,int x)
{
	if(isfull(top))
	{
		cout<<"Stack overflow"<<endl;
	}
	else
	{
		struct Node * p;
		p=(struct Node*)malloc(sizeof(struct Node));
		p->data=x;
		p->next=top;
		top=p;
		return top; 
	}
}
int pop(struct Node **top)
{
	struct Node *p;
	p=*top;
	
	
	*top=(*top)->next;
	int x = (*top)->data;
	delete(p); 
    return x;
}
void stacktop(Node *top)
{
	if(top==NULL)
	{
		cout<<"Nothing in stack";
	}
	else
	{
		cout<<"Top element in stack is "<<top->data<<endl;
	}
}

void stackbottom(Node *top)
{
	Node *p;
	p=top;
	if(top==NULL)
	{
		cout<<"Nothing in stack";
	}
	else
	{
		do
		{
			p=p->next;
		}
		while(p->next!=NULL);
		cout<<"Bottom element in stack is "<<p->data<<endl;
		
	}
	
}

void peek(struct Node *top,int x)
{
	Node *p;
	p=top;
	int i=1;
	
	do
	{
		if(p->data==x)
		{
			cout<<"element found at position "<<i<<" from top"<<endl;
			break;
		}
		else
		{
			p=p->next;
			i++;
		}
		
	}
	while(p->next !=NULL);
	
}

int main()
{
	struct Node *top=NULL;
	
	top=push(top,78);
	top=push(top,50);
	top=push(top,40);
	top=push(top,30);
	print(top);
		stacktop(top);
	stackbottom(top);
	//int ele = pop(&top);
	//peek(top,50);
	//cout<<ele<<"is popped"<<endl;
	//cout<<"and after popping"<<endl;
    ///print(top);
}
