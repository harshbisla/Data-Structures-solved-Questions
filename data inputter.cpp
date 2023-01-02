#include<iostream>
#include<string>
using namespace std;
class data
{
	string password;
	string username;
    public:
    	void getdata()
    	
    	{
    	    bool x;
    		cout<<"FOR MAKING A ENTRY PRESS 1 "<<endl<<"ELSE PRESS 0 -:"<<endl;
	        cin>>x;
	        while(x)
	        {
		        cout<<"ENTER USERNAME"<<endl;
		        cin>>username;
		        cout<<"ENTER PASSWORD"<<endl;
		        cin>>password;
		        cout<<"FOR ANOTHER ENTRY PRESS 1 ELSE 0 -:";
		        cin>>x;
	        }
	    }
};
int main()
{
	
	data d;
	d.getdata();
}
