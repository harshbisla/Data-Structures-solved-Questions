// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;
 
// Node of the binary tree
struct node {
    int data;
    node* left;
    node* right;
    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// Function to print flattened
// binary Tree
void print(node* parent)
{
    node* curr = parent;
    while (curr != NULL)
        cout << curr->data << " ", curr = curr->right;
}
 
// Function to perform in-order traversal
// recursively
void inorder(node* curr, node*& prev)
{
    // Base case
    if (curr == NULL)
        return;
    inorder(curr->left, prev);
    prev->left = NULL;
    prev->right = curr;
    prev = curr;
    inorder(curr->right, prev);
}
node* maxx(node* root)
{
	if(root==NULL)
	{
		return NULL;
	}
	while(root->right!=NULL)
	{
		root=root->right;
	}
	return root;
}
node* flatten(node* root)
{
		if(root==NULL)
		{
			return NULL;
		}
		if(root->right==NULL && root->left==NULL)
		{
			return root;
		}
		node*fl=flatten(root->left);
		node*fr=flatten(root->right);
		if(fl!=NULL)
			fl->left=NULL;
		if(fr!=NULL)
			fr->left=NULL;
		if(fl!=NULL)
			maxx(fl)->right=root;
		root->right=fr;
		if(fl!=NULL)
			return fl;
		else
			return root;
}

// Driver code
int main()
{
    node* root = new node(1);
    root->right = new node(2);
    root->right->right = new node(3);
    root->right->right->right = new node(4);
    root->right->right->right->right = new node(5);
 
    // Calling required function
    print(flatten(root));
 
    return 0;
}
