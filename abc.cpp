#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
int sum(int * arr,int n)
{
	int s=0;
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++)
	{
		mp[arr[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		if(mp[arr[i]]==1)
		{
			s+=arr[i];
		}
	}
	return s;
}
int main()
{
	int arr[7]={4,5,6,7,4,5};
	cout<<sum(arr,6);
}
