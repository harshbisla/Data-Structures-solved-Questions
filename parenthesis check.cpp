#include<iostream>
#include<stdlib.h>




using namespace std;



 struct stack
{
		int top;
		int size;
		char *arr;
};




int isempty(struct stack *st)
{
	if(st->top=-1)
	{
		
		return 1;
	}
	else
	{
		return 0;
	}
}



int isfull(struct stack *st)
{
	if(st->top=st->size-1)
	{
	
		return 1;
	}
	else
	{
		return 0;
	}
}







void push(struct stack *st, char val)
{
	if(isfull(st))
	{
		cout<<"Sorry the struct stack is already full, struct stack overflow"<<endl;
	}
	else
	{
		st->top++;
		st->arr[st->top]=val;
	}
}








void pop(struct stack *st)
{
	if(isempty(st))
	{
		cout<<"The struct stack is empty , nothing to pop"<<endl;
	}
	else
	{
		//cout<<"The popped element is"<<st->arr[st->top]<<endl;
		st->top--;
	}
}












int parenthesischeck(char *exp)
{
	struct stack *s;
	s->size=10;
	s->top=-1;
	s->arr=(char*)malloc(s->size*sizeof(char));
	
    for(int i=0;exp[i]!='\0';i++)
    {
    	if(exp[i]=='(')
    	{
    		push(s,exp[i]);
		}
		else if(exp[i]==')')
		{
			if(isempty(s))
			{
				return 0;
			}
			else
			{
				pop(s);
			}
		}
	}
	if(isempty(s))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}



int main()
{
	char *exp;
	cout<<"Enter the expression you wantt to parenthesis check on : "<<endl;
	cin>>exp;
	if(parenthesischeck(exp))
	{
		cout<<"The parenthesis in equation "<<exp<<" are balanced ."<<endl;
		
	}
	else
	{
		cout<<"The parenthesis in equation "<<exp<<" are not balanced ."<<endl;
		
	} 
	 
}
