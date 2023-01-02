#include <bits/stdc++.h>
using namespace std;
int search(int array[], int s, int e, int k){
   while (s <= e){
      int middle = s + (e- s )/2;
      if (array[middle] == k)
         return middle;
      if (array[middle] < k)
         s = middle + 1;
      else
         e = middle - 1;
   }
   return -1;
}
int findPivot(int arr[], int low, int high)
{
    // base cases
    if (high < low)
        return -1;
    if (high == low)
        return low;
 
    int mid = (low + high) / 2; /*low + (high - low)/2;*/
    if (mid < high && arr[mid] > arr[mid + 1])
        return mid;
 
    if (mid > low && arr[mid] < arr[mid - 1])
        return (mid - 1);
 
    if (arr[low] >= arr[mid])
        return findPivot(arr, low, mid - 1);
 
    return findPivot(arr, mid + 1, high);
}
int main()
{
	// given sorted rotated array
	int n;
	cout<<"enter no. of elements"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter elements"<<endl;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int k;
	cout<<"Enter element to be searched"<<endl;
	cin>>k;
	int p;
	//for loopcant be used due to complexity
//	for(int i=0;i<n;i++)//for finding pivot element
//	{
//		if(arr[i+1]<arr[i])
//		{
//			p=i;   
//			break;
//		}
//	}
    p = findPivot(arr, 0, n - 1);
	if(arr[p]==k)
	{
		cout<< p;
	}
	if(p==-1)
	{
		cout<<search(arr,0,n-1,k);
	}
	if(k>=arr[0])
	{
		cout<<search(arr,0,p,k)<<endl;
	}
	else
	{
		cout<<search(arr,p+1,n-1,k)<<endl;
	}
	
	
}
