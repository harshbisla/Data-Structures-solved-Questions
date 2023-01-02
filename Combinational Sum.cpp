#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(vector<int> &arr,int sum,vector<vector<int> > &ans,vector<int> &a,int i)
{
	if(sum==0)
	{
//		sort(a.begin(),a.end());
		ans.push_back(a);
		return ;
	}
	for(i;i<arr.size();i++)
	{
		if(sum-arr[i]<0)
		{
			break;
		}
		a.push_back(arr[i]);
		solve(arr,sum-arr[i],ans,a,i);
		a.pop_back();
	}
}
vector<vector<int > >combSum(vector<int> &arr,int sum)
{
	sort(arr.begin(),arr.end());
	arr.erase(unique(arr.begin(), arr.end()), arr.end());
	vector<vector<int > >ans;
	vector<int> a;
	int c=0;
	solve(arr,sum,ans,a,c);
	return ans;
}
int main()
{
	int n;
	cout<<"Enter the no. of elements"<<endl;
	cin>>n;
	vector<int> arr;
	cout<<"Enter the numbers you want"<<endl;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		arr.push_back(x);
	}
	cout<<"Enter the sum you want to search"<<endl;
	int x;
	cin>>x;
	vector<vector<int > > ans =combSum(arr,x);
	if(ans.size()==0)
	{
		cout<<"Empty"<<endl;
	}
	for(int i=0;i<ans.size();i++)
	{
		if(ans[i].size() > 0)
		{
			cout<<"(";
			for(int j=0;j<ans[i].size();j++)
			{
				cout<<ans[i][j]<<" ";
			}
			cout<<")";
		}
	}
}
