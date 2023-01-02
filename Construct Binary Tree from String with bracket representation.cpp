#include <bits/stdc++.h>
using namespace std;
 
/* A binary tree node has data, pointer to left
   child and a pointer to right child */
struct Node {
    int data;
    Node *left, *right;
};
/* Helper function that allocates a new node */
Node* newNode(int data)
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}


void preOrder(Node* node)
{
    if (node == NULL)
        return;
    printf("%d ", node->data);
    preOrder(node->left);
    preOrder(node->right);
}


Node* tfs(string str, int si, int ei)
{
	Node *root=newNode(str[si]-'0');
	if (si > ei)
        return NULL;
	if(si==ei )
		return root;
	int s=si;
	while(str[s]!='(' )
	{
		++s;
	}
	++s;
	int x=1;
	int e=s;
	while(x!=0 )
	{
		if(str[e]=='(')
			++x;
		if(str[e]==')')
			--x;
		++e;
	}
	e=e-2;
	int sr=e+3;
	int er=ei-1;
	root->left=tfs( str,s,e);
	root->right=tfs(str,sr,er);
	return root;
}
int main()
{
    string str = "5(4(3(1)))(6(7))";
    Node* root = tfs(str, 0, str.length() - 1);
    preOrder(root);
}
