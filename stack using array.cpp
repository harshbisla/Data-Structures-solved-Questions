#include<iostream>
#include<stdlib.h>
using namespace std;
class stack
{
	public:
	int top;
	int size;
	int *arr;
};

void display(stack *st)
{
	if(st->top=-1)
	{
		cout<<"Empty stack"<<endl;
	}
	else
	{
			for(int j=0;j<=st->top;j++)
			{
				cout<<"ELement at position "<<j+1<<"is"<<st->arr[j]<<endl;
			}
	}
}


int isempty(stack *st)
{
	if(st->top=-1)
	{
		cout<<"EMpty"<<endl;
		return 1;
	}
	else
	{
		return 0;
	}
}

int isfull(stack *st)
{
	if(st->top=st->size-1)
	{
		cout<<"full"<<endl;
		return 1;
	}
	else
	{
		return 0;
	}
}

void push(stack *st, int val)
{
	if(isfull(st))
	{
		cout<<"Sorry the stack is already full, stack overflow"<<endl;
	}
	else
	{
		st->top++;
		st->arr[st->top]=val;
	}
}

void pop(stack *st)
{
	if(isempty(st))
	{
		cout<<"The stack is empty , nothing to pop"<<endl;
	}
	else
	{
		cout<<"The popped element is"<<st->arr[st->top]<<endl;
		st->top--;
	}
}
int main()
{
	stack *s;
	s->size=8;
	s->top=-1;
	s->arr=(int *)malloc((s->size)*sizeof(int));
	isempty(s);
	push(s,7);
	pop(s);
//	push(s,8);
//	push(s,9);
//	display(s);
	return 0;
	
	
}
