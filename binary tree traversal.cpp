 
// 
//               QUESTION
// 
// 
//                       4
//                     /   \                       
//                    /     \
//                   1       6
//                  / \
//                 /   \
//                5     2


#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
	int data;
	Node *left;
	Node *right;
};

Node *createNode(int d)
{
	Node *n;
	n=(Node *)malloc(sizeof(Node));
	n->data=d;
	n->left=NULL;
	n->right=NULL;
	return n;
	
}
void preorder(Node * p)//preorder traversal function
{
	if(p!=NULL)
	{
		cout<<p->data<<endl;
		preorder(p->left);
		preorder(p->right);
		
	}
	else
	{
		return ;
	}
}

void postorder(Node * p)//postorder traversal function
{
	if(p!=NULL)
	{
	
		postorder(p->left);
		postorder(p->right);
		cout<<p->data<<endl;	
	}
	else
	{
		return ;
	}
}


void inorder(Node * p)//inorder traversal function
{
	if(p!=NULL)
	{
	
		inorder(p->left);
		cout<<p->data<<endl;	
		inorder(p->right);
		
	}
	else
	{
		return ;
	}
}



int main()
{
	Node *p=createNode(4);
	Node *p1=createNode(1);
	Node *p2=createNode(6);
	Node *p3=createNode(5);
	Node *p4=createNode(2);
	
	// linking these three nodes
	p->left=p1;
	p->right=p2;
	//
	p1->left=p3;
	p1->right=p4;
	//

	//preorder
	cout<<"Pre Order traversal gives"<<endl;
	preorder(p);
	//postorder
	cout<<"Post Order traversal gives"<<endl;
	postorder(p);
	//inorder
	cout<<"In Order traversal gives"<<endl;
	inorder(p);
	
	
}
