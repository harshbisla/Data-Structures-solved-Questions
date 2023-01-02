#include <bits/stdc++.h>
using namespace std;
void productArray(int arr[], int n)
{
	int p=1;
	for(int i=0;i<n;i++)
	{
		p=p*arr[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<p/arr[i]<<" ";
	}
}
int main()
{
    int arr[] = { 10, 3, 5, 6, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The product array is: \n";
    productArray(arr, n);
}
