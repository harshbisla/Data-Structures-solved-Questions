#include <iostream>
using namespace std;
class myStack{
	public:
	struct node{
		int data;
		node* next;
		node* prev;
		node(int data){
			this->data=data;
		}
	};
	
	node*head=NULL;
	node*mid=NULL;
	int size = 0;
	void push(int x)
	{
		node*temp=new node(x);
		if(size==0)
		{
			head=temp;
			mid=temp;
			size++;
			return ;
		}
		head->next=temp;
		temp->prev=head;
		head=head->next;
		if(size%2==1)
		{
			mid=mid->next;
		}
		size++;
	}
	int pop()
	{
		if(size==0)
		{
			return -1;
		}
		if(size==1)
		{
			node*temp=head;
			head=NULL;
			mid==NULL;
			int x=temp->data;
			size--;
			delete temp;
			return x;
		}
		else
		{
			node*temp=head;
			head=head->prev;
			head->next=NULL;
			if(size%2==0)
			{
				mid=mid->prev;
			}
			int x=temp->data;
			size--;
			delete temp;
			return x;
		}
	}
	int findMiddle()
	{
		if(size==0)
		{
		return -1;
		}
		
		return mid->data;
	}
	void deleteMiddle()
	{
		if(size==0)
		{
			return;
		}
		if(size==1)
		{
			node* temp=head;
			head=NULL;
			mid=NULL;
			delete temp;
			size--;
			return ;
		}
		if(size==2)
		{
			head=head->prev;
			mid=mid->prev;
			head->next=NULL;
			size--;
			return ;
			
		}
		else 
		{
			
			node*temp=mid;
			temp->prev->next=temp->next;
			temp->next->prev=temp->prev;
			size--;
			delete temp;
			return ;	
		}
		
	}
};

int main()
{
    myStack st;
    st.push(11);
    st.push(22);
    st.push(33);
    st.push(44);
    st.push(55);
    st.push(66);
    st.push(77);
    st.push(88);
    st.push(99);
    cout <<"Popped : "<< st.pop() << endl;
    cout <<"Popped : "<< st.pop() << endl;
    cout <<"Middle Element : "<< st.findMiddle() << endl;
    st.deleteMiddle();
    cout <<"New Middle Element : "<< st.findMiddle() << endl;
    return 0;
}
