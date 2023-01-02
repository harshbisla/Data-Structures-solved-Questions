
//stacks using arrays
#include<iostream>
#include<climits>
using namespace std;
class stack
{
	private:
		
	    int * data;
	    int nextindex;
	    int capacity;
	public:
		stack()
		{
			data=new int[4];
			nextindex=0;
			capacity=4;	
		}
		int size()
		{
			return nextindex;
		}
		bool isEmpty()
		{
			if(size()==0)
			{
				return true;
				
			}
			else
			{
				return false;
			}
		}
		void push(int element)
		{
			if(nextindex<capacity)
			{
				data[nextindex]=element;
				nextindex++;
			}
			else
			{
				int * newdata=new int[capacity*2];
				for(int i=0;i<capacity;i++)
				{
					newdata[i]=data[i];
					
				}
				capacity=capacity*2;
				delete [] data;
				data=newdata;
				data[nextindex]=element;
				nextindex++;
				
			}	
		}
		int top()
		{
			if(isEmpty())
			{
				cout<<"Stack is Empty"<<endl;
				return -1;
			}
			else
			{
				return data[nextindex-1];
			}
		}
		int pop()
		{
			if(isEmpty())
			{
				cout<<"Stack is Empty"<<endl;
				return -1;
			}
			else
			{
				nextindex--;
				return data[nextindex];
			}
			
		}
		void display()
		{
			for(int i=0;i<nextindex;i++)
			{
				cout<<data[i]<<" -> ";
			}
		}
	    	
};
int main()
{
	stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.display();
	cout<<s.pop();
	cout<<s.top();
	s.display();
	
}
