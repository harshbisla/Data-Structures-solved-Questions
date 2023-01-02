#include<iostream>
using namespace std;
class trieNode{
	char data;
	trieNode **children;
	bool isTerminal;
	TrieNode(char data)
	{
		this->data=data;
		children = new trieNode*[26];
		for(int i=0;i<26;i++)
		{
			children[i]=NULL;
		}
		isTerminal=false;
	}
};
class trie{
	trieNode * root;
	public:
		trie(){
			root=new trieNode(\0);
		}  
//TO INSERT A WORD IN TRIES DATA STRUCTURE
		void insertWord(trieNode * root,string word)
		{
			//base case
			if(word.size() == 0)
			{
				root->isTerminal = true;
				return ;
			}
			//small calculation
			int index = word[0] - 'a';
			trieNode * child;
			if(root->children[index]!= NULL)
			{
				child = root->children[index];
			}
			else
			{
				child = new trieNode(word[0]); 
				root->children[index]=child;
			}
			//recursive call
			insertWord(child,word.substr(1));
		}
		
		void insertWord(string word)
		{
			insertWord(root,word);
		}
		
		
// 	TO SEARCH THE WORD IN TRIES DATA STRUCUTRE
		bool searchWord(trieNode* root,string word)
		{
			//basecase
			if(word.size()==0)
			{
				if(root->isTerminal==true)
				{
					return true;
				}
			}
			//rrecurssive call
			int index=word[0]-'a';
			if(root->children[index]== NULL)
			{
				return false;
			}
			else
			{
				trieNode*child=root->children[index];
				return searchWord(child,word.substr(1));
			}
		}
		bool searchWord(string word)
		{
			return searchWord(root,word);
		}	
//TO DELETE A WORD FROM TRIES DATA SSTRUCTURE
		void  removeWord(string word)
		{
			removeWord(root,word);
		}
		void removeWord(trieNode * root, string word)
		{
			if(word.size()==0)
			{
				root->isTerminal=false;
				return ;
			}
			
			int index=word[0]-'a';
			if(root->children[index]!=NULL)
			{
				trieNode* child=root->children[index];
				removeWord(child,word.substr(1));
				if(child->isTerminal ==false)
				{
					for(int i=0;i<26;i++)
					{
						if(child->children[i] != NULL)
						{
							return ;
						}
					}
					delete child;
					root->children[index]= NULL;
				}
				
			}
			else{
				//word not found
				return ;
			}
			
		}
};
int main()
{
	trie t;
	t.insertWord("and");
	t.insertWord("are");
	t.insertWord("dot");
	cout<<t.searchWord("and")<<endl;
	t.removeWord("and");
	
	cout<<t.searchWord("and")<<endl;
}
