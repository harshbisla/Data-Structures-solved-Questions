//counting sort
#include<iostream>
#include<string.h>
using namespace std;
//void counting_sort(int *arr,int n)
//{
//	int max=INT_MIN;
//	for(int i=0;i<n;i++)
//	{
//		if(arr[i]>max)
//		{
//			max=arr[i];
//		}
//	}
//	int nm=max+1;
//	int aux[nm];
//	for(int i=0;i<nm;i++)
//	{
//		aux[i]=0;
//	}
//	for(int i=0;i<n;i++)
//	{
//		aux[arr[i]]++;
//	}
//	int x=0;
//	int i=0;
//	while(i<nm)
//	{
//		if(aux[i]>0)
//		{
//			arr[x]=i;
//			x++;
//			aux[i]--;
//			
//			i=i;
//		}
//		else{
//			i++;
//		}
//	}
//}
string countSort(string arr){
        // code here
    int max=-11;
    int size=sizeof(arr);
	for(int i=0;i<size;i++)
	{
		if(arr[i]-97>max)
		{
			max=arr[i]-97;
			
		}
		cout<<arr[i]-97 << " ";
		
	}
	cout<<endl;
    int nm=max+1;
	int aux[nm];
    for(int i=0;i<nm;i++)
    {
        aux[i]=0;
    }
    
    for(int i=0;i<size;i++)
    {
        aux[arr[i]-97]++;
    }
    int x=0;
	int i=0;
	while(i<nm)
	{
		if(aux[i]>0)
		{
			arr[x]=i+97;
			x++;
			aux[i]--;
			i=i;
		}
		else{
			i++;
		}
	}
    return arr;
}
int main()
{
//	int n;
//	cout<<"Enter no of elements"<<endl;
//	cin>>n;
//	cout<<"Enter the numbers"<<endl;
//	int arr[n];
//	for(int i=0;i<n;i++)
//	{
//		cin>>arr[i];
//	}
//	counting_sort(arr,n);
//	cout<<"After sorting ....The elemments in array are:- "<<endl;
//	for(int i=0;i<n;i++)
//	{
//		cout<<arr[i];
//	}
	string st;
	cin>>st;
	cout<<countSort(st);
}
