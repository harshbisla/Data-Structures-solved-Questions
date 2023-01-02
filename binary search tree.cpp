//inorder traversal of binary search tree arranges it in ascending order....

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//void preorder(Node * p)//preorder traversal function
//{
//	if(p!=NULL)
//	{
//		cout<<p->data<<endl;
//		preorder(p->left);
//		preorder(p->right);
//		
//	}
//	else
//	{
//		return ;
//	}
//}
//
//void postorder(Node * p)//postorder traversal function
//{
//	if(p!=NULL)
//	{
//	
//		postorder(p->left);
//		postorder(p->right);
//		cout<<p->data<<endl;	
//	}
//	else
//	{
//		return ;
//	}
//}


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

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int isBST(Node * p)//check whether given binary tree is bin search tree or not  function
{
	static Node *prev=NULL;
	if(p!=NULL)
	{
		if(!isBST(p->left))
		{
			return 0;
		}
		if(prev!=NULL && p->data<= prev->data)
		{
			return 0;
			
		}
		else
		{
		    prev=p;
		    return isBST(p->right);
 	    }
		
	}
	else
	{
		return 1;
	}
}


//Node *search(int x,Node *p)//function for searching elemeent iin binary search tree
//{
//	if(p==NULL)
//	{
//		return NULL;
//	}
//    if(p->data==x)
//	{
//		return p;
//	}
//	else if(x>p->data)
//	{
//		search(x,p->right);
//	}
//	else if(x<p->data)
//	{
//		return search(x,p->left);
//	}
//
//}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//this is a recursive search code
void search(int x,Node *p)//function for searching elemeent iin binary search tree
{
	if(p==NULL)
	{
		cout<<" Element Not found"<<endl;
	}
    if(p->data==x)
	{
		cout<<"Element found"<<endl;
	}
	else if(x>p->data)
	{
		search(x,p->right);
	}
	else if(x<p->data)
	{
		search(x,p->left);
	}

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//this is a iterative search code
void iterativesearch(int x,Node *p)
{

	while(p!=NULL)
	{
		
	    if(p->data==x)
	    {
	    	cout<<"Element found"<<endl;
	    	break;
	    	return;
		}
		else if(x>p->data)
		{
			p=p->right;
			
		}
		else if(x<p->data)
		{
			p=p->left;
		}
	
    }
   if(p==NULL)
   {
   	cout<<"Element not found"<<endl;
   }
   

}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//function for deletingg of a node
Node *inorderpredecessor(Node * p)
{
	p=p->left;
	while(p->right!=NULL)
	{
		p=p->right;
		
	}
	return p; 
	
}
Node* deleteNode(Node *p,int x)
{
	struct Node* ipre;
	if(p==NULL)
	{
		return NULL;
		
	}
	if(p->left==NULL && p->right==NULL)
	{
		free(p);
		return NULL;
	}
	//search for the node to be deleted
	if(x<p->data)
	{
	    p->left=deleteNode(p->left,x);
	}
	else if(x>p->data)
	{
		p->right=deleteNode(p->right,x);
	}
	//deletion strategy whenn node is found
	else
	{
		ipre=inorderpredecessor(p);
		p->data=ipre->data;
		p->left=deleteNode(p->left,ipre->data);
	}
	return p;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
	Node *p=createNode(9);
	Node *p1=createNode(4);
	Node *p2=createNode(11);
	Node *p3=createNode(2);
	Node *p4=createNode(7);
	Node *p5=createNode(15);
	Node *p6=createNode(14);
	Node *p7=createNode(5);
	Node *p8=createNode(8);
	
	// linking these three nodes
	p->left=p1;
	p->right=p2;
	//
	p1->left=p3;
	p1->right=p4;
	//
	p4->left=p7;
	p4->right=p8;
	//
	p2->right=p5;
	//
	p5->left=p6;
	

//	//preorder
//	cout<<"Pre Order traversal gives"<<endl;
//	preorder(p);
//	//postorder
//	cout<<"Post Order traversal gives"<<endl;
//	postorder(p);
//	//inorder
	cout<<"In Order traversal gives"<<endl;
	inorder(p);
	if(isBST(p))
	{
		cout<<"The given binary tree is a  binary search tree"<<endl;
	}
	else
	{
		cout<<"The given binary tree is not a binary search tree"<<endl;
	}
	//for searching an element in binary search tree
//    Node *n=search(10,p);
//    if(n!=NULL)
//    {
//    	cout<<"found "<<n->data<<endl;
//	}
//	else
//	{
//		cout<<"element not found"<<endl;
//	}
//either commented serch is used or below one both are same
    //search(10,p);
//    iterativesearch(2,p);
    
    deleteNode(p,4);
    cout<<"In Order traversal after deletion gives"<<endl;
	inorder(p);
    
    
    

}


