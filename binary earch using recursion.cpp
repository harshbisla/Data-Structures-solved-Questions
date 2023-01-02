#include<iostream>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
        if (arr[mid] == x)  return mid;
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);
        return binarySearch(arr, mid+1, r, x);
   }
   return -1;
}

int main(void)
{
	cout<<"Enter the no. of Elements "<<endl;
	int n;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
   //int arr[] = {2, 3, 4, 10, 40};
   //int n = sizeof(arr)/ sizeof(arr[0]);
    cout<<"Enter elements to be searched "<<endl;
    int x;
    cin>>x;
    int result = binarySearch(arr, 0, n-1, x);
   (result == -1)? cout<<"Element is not present in array": cout<<"Element is present at index "<<result;
   return 0;
}
