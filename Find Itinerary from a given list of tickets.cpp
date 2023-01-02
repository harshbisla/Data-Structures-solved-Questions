#include<bits/stdc++.h>
using namespace std;
//class ticket{
//	public:
//		string from;
//		string to;
//		ticket(string from,string to)
//		{
//			this->from=from;
//			this->to=to;
//		}
//};
void printiternary(map<string,string> dataset)
{
	map<string,string> revmap;//to store reverse of given map
	map<string,string>:: iterator it;
	
	for(it=dataset.begin();it!=dataset.end();it++)
	{
		revmap[it->second]=it->first;
	}
	
	//findiinf staring point of iternarty
	string start;
	
	for(it=dataset.begin();it!=dataset.end();it++)
	{
		if(revmap.find(it->first)==revmap.end())
		{
			start=it->first;
			break;
		}
	}
	
	if(start.empty())
	{
		cout<<"Invalid Input"<<endl;
		return ;
	}
	//once we have starting point then we simply have to go next 
	//next of next given hash map
	while(it!=dataset.end())
	{
		cout<<it->first<<"->"<<it->second<<endl;
		it=dataset.find(it->second);
	}
}
int main()
{
	map<string,string> dataset;
	dataset["chennai"]= "bangalore";
	dataset["bombay"]= "delhi";
	dataset["goa"]= "chennai";
	dataset["delhi"]= "goa";
	
	printiternary(dataset);
	
}
