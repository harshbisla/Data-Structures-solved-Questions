#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Trie{
	public:
		class node{
			public:
				bool end;
				node* next[26];
				node()
				{
					end=false;
					for(int i=0;i<26;i++)
					{
						next[i]=NULL;
					}
				}
		};
		node* trie;
		trie()
		{
			trie = new node();
		}
		void insert(string word)
		{
			int i=0;
			node* it=trie;
			while(i < word.size())
			{
				if(it->next[word[i]-'a']==NULL)
				{
					it->next[word[i]-'a']  = new node();
				}
				it=it->next[word[i]-'a'];
				i++;
			}
			end =true;
		}
		
		bool search(string word)
		{
			int i=0;
			node* it=trie;
			while(i<word.size())
			{
				if(it->next[word[i]-'a']==NULL)
					return false;
					it=it->next[word[i]-'a'];
					i++;
			}
			return it->end;
		}
};
int main()
{
	trie mytrie = new Trie();
	string word = "ayush";
	mytrie->insert(word);
	
	if(mytrie->search("madhav"))
	{
		cout<<"madhav found";
	}
	if(mytrie->search("ayush"))
	{
		cout<<"ayush found";
	}
}
