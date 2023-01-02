#include<iostream>
#include<climits>
using namespace std;
template<typename T>
class Node
{
	public:
		T data;
		Node<T>* next;
		Node(T data)
		{
			this->data=data;
			next=NULL;
		}
		~Node() 
		{
            delete next;
	    }
	
};
template<typename T>
class stack
{
	private:
	Node<T>* head;
	Node<T>* tail;
	int size;
	public:
		stack()
		{
			head=NULL;
			tail=NULL;
			size=0;
		}
		int getSize()
		{
			Node<T>* temp=head;
			int n=0;
			while(temp!=NULL)
			{
				n++;
				temp=temp->next;
			}
			return n;
		}
		bool isEmpty()
		{
			if(head==NULL)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		void push( T element)
		{
			Node<T>*newnode=new Node<T>(element);
			if(head==NULL)
			{
				
				head=newnode;
				tail=newnode;
			}
			else
			{
				tail->next=newnode;
				tail=newnode;
				
			}
			size++;
		}
		T top()
		{
		
			return tail->data;
		}
		T pop()
		{
			
			Node<T>* temp=head;
			while(temp->next!=tail)
			{
				temp=temp->next;
			}
			T x=tail->data;
			delete tail;
			tail=temp;
			temp->next=NULL;
			size--;
			return x;
		
		}
		void print()
		{
			Node<T>* temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
		}
		
};
int main()
{
	stack <int>s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.print();
	cout<<"  "<<s.getSize()<<"  ";
	cout<<"  "<<s.pop()<<"  ";
	s.print();
	cout<<"  "<<s.top()<<"  ";
	cout<<"  "<<s.getSize()<<"  ";
}

