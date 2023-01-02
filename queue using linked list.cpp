#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
	int data;
	Node *next;
};



//declaring globally
Node *f=NULL;
Node *r=NULL;


int isfull()
{
	Node *n;
	n=(Node*)malloc(sizeof(Node));
	if(n==NULL)
	{
		return 1;
		
	}
	else
	{
		return 0;
	}
}

void queuetrav(Node *ptr)
{
	cout<<"abc"<<endl ;
	while(ptr!=NULL)
	{
		cout<<"Element is "<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
void enqueue( int val)
{
	Node *n;
	n=(Node*)malloc(sizeof(Node));
	if(n==NULL)
	{
		cout<<"Queue overflow"<<endl;
	}
	else
	{
		n->data=val;
		n->next=NULL;
		if(f==NULL)
		{
			f=r=n;
			
		}
		else
		{
			r->next=n;
			r=n;
		}
	}
	
}



int dequeue()
{
	int val=-1;
	Node *ptr;
	ptr=f;
	if(f==NULL)
	{
		cout<<"Queue empty"<<endl;
		
	}
	else
	{
		f=f->next;
		val=ptr->data;
		return val; 
		delete(ptr);
	}
}


int main()
{
	dequeue();
	enqueue(20);
	queuetrav(f);
	cout<<dequeue();
	
	
}
