//DEQueue

//I made it on my own..... proud of that 
// and with this data structures fully understood

#include<iostream>
#include<stdlib.h>
using namespace std;
struct queue
{
	int f;
	int l;
	int size;
	int *arr;
};

//adding element from first
void enqueuef(queue *q , int val)
{
	if(q->l ==q->size-1)
	{
		cout<<"queue is full"<<endl;
	}
	else if(q->f==0 && q->l==0)
	{
		 q->l=q->l+1;
	    q->arr[q->l]=val;
		
	}
	else
	{
		q->f--;
		q->arr[q->f]=val;
		
	}
	
	
}

//adding element from last
void enqueuel(queue *q , int val)
{
	if(q->l==q->size-1)
	{
		cout<<"queue is already full from back"<<endl;
	}
	else
	{
	    q->l=q->l+1;
	    q->arr[q->l]=val;
    }
	
}

//deleting element from first
int dequeuef(queue *q)
{
	int a=-1;
	if(q->f==q->l)
	{
	    cout<<"Queue is already empty"<<endl;
	}
	else
	{
		q->f++;
		a=q->arr[q->f];
	}
	return a;
}

//deleting element from last
int dequeuel(queue *q)
{
	int a=-1;
	if(q->f==q->l)
	{
	    cout<<"Queue is already empty"<<endl;
	}
	else
	{
		a=q->arr[q->l];
		q->l--;
		//a=q->arr[q->l];
		
		
	}
	return a;
	
	
	
}

int main()
{
	queue q;
	q.f=0;
	q.l=0;
	q.size=10;
	q.arr=(int *)malloc(q.size*sizeof(int));
	enqueuef(&q,10);
	enqueuel(&q,26);
	enqueuel(&q,25);
	enqueuel(&q,23);
	
	

    cout<<"the dequed element is "<<dequeuef(&q)<<endl;
	cout<<"the dequed element is "<<dequeuef(&q)<<endl;
	enqueuef(&q,30);
	enqueuef(&q,340);
	cout<<"the dequed element is "<<dequeuef(&q)<<endl;

	
	
	
}
