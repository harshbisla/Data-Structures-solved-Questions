#include<iostream>
using namespace std;
template<typename V>
class MapNode
{
	public:
	string key;
	V value;
	MapNode* next;
	MapNode(string key , V value)
	{
		this->key=key;
		this->value=value;
		next=NULL;
	}
	~MapNode()
	{
		delete next;
	}
};
template<typename V>
class ourmap
{
	MapNode<V> ** buckets;
	int count;
	int numBuckets;
	
	public:
		ourmap()
		{
			count = 0;
			numBuckets = 5;
			buckets= new MapNode<V>*[numBuckets];
			for(int i=0;i<numBuckets;i++)
			{
				buckets[i] = NULL;
			}
		}
		~ourmap()
		{
			for(int i=0;i<numBuckets;i++)
			{
				delete buckets[i];
			}
			delete [] buckets;
		}
		
		///////////////////////FUNC TO FIND BUCKET INDEX/////////////////////////////////
		int getbucketindex(string key)
		{
			int hashcode=0;
			int currentcoeff =1;
			for(int i=key.lenght()-1;i>=0;i--)
			{
				hashcode=hashcode+key[i]*currentcoeff;
				hashcode=hashcode%numBuckets;
				currentcoeff*=37;
				currentcoeff=currentcoeff%numBuckets;
			}
			
			return hashcode % numBuckets;
			
		}
		/////////////////////////////////////////////////////////////////////////////
		//////////////////REHASH FUNCTION////////////////////////////////////////////
	    void rehash()
	    {
	    	MapNode<V> ** temp = buckets;
	    	buckets = new MapNode<V>*[2*numBuckets];
	    	for(int i=0;i<2*numBuckets;i++)
	    	{
	    		buckets[i] = NULL;
			}
			int oldBucketCount= numBuckets;
			numBuckets*=2;
			int count=0;
			for(int i=0;i<oldBucketCount;i++)
			{
				MapNode<V> ** head=temp[i];
				while(head!=NULL)
				{
					string key = head->key;
					V value = head->value;
					insert(key,value);
					head=head->next;
					
				}
			}
			for(int i=0;i<oldBucketCount;i++)
			{
			    MapNode<V> ** head=temp[i];
			    delete head;
			}
			delete [] temp;
		}
		////////////////////////////////////////////////////////////////////////////////
		
		//to find size
		int size()
		{
			return count;
		}
		
		//inserting a node
		void insert(string key,V value)
		{
			int bucketindex = getbucketindex( key);
			MapNode<V>* head= buckets[bucketindex];
			while(head!=NULL)
			{
				if(head->key == key)
				{
					head->value=value;
					return;
				}
				head=head->next;
			}
			head= buckets[bucketindex];
			MapNode<V>* node = new MapNode<V>(key,value);
			node->next=head;
			buckets[bucketindex]=node;
			count++;
			double loadfactor = (1.0*count)/numBuckets;
			if(loadfactor > 0.7)
			{
				rehash();
			}
		}
		
		
		//for getting a value at a particular node of map
		V getValue(string key)
		{
			int bucketindex = getbucketindex( key);
			MapNode<V>* head= buckets[bucketindex];
		    while(head!=NULL)
		    {
		    	if(head->key == key)
		    	{
		    		return head->value;
				}
		    	head=head->next;
			}
			return 0;
			 
		}
		
		//for getting loadfactor
		double getLoadFactor()
		{
			return (1.0*count)/numBuckets;
		}
		
		//deleting a node
		V remove(string key)
		{
			int bucketindex = getbucketindex( key);
			MapNode<V>* head= buckets[bucketindex];
			MapNode<V>*prev = NULL;
			while(head!=NULL)
			{
				if(head->key==key)
				{
					if(prev==NULL)
					{
						buckets[bucketindex]=head->next;
					}
					else
					{
						prev->next=head->next;
					}
					    V val=head->value;
						head->next=NULL;
						delete head;
						count--;
						return val;
				}
				prev=head;
				head=head->next;	
			}
			return 0;
			
		}
		
		
};

int main()
{
	ourmap<int> map;
	for(int i=0;i<10;i++)
	{
		char c = '0' +i;
		string key= "abc";
		key =key +c;
		int value =i+1;
		map.insert(key,value);
		cout<<map.getLoadFactor()<<endl;
	}
	cout<<map.size()<<endl;
}
