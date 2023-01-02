
//MAJOURITY ELEMENT WITH COMPLEXITY NLOG(N)


#include<iostream>
using namespace std;
void merge(int arr[], int p, int q, int r) {
  
  // Create L ? A[p..q] and M ? A[q+1..r]
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, m, r);
  }
}

void maj_element(int arr[],int n)
{
	mergeSort(arr,0,n-1);//nlog(n)
	//to find max coount
	int count =1;
	int cm=1;
	int me;
	for(int i=1;i<n;i++)
	{
		if(arr[i]==arr[i-1])
		{
			count ++;
			if(count >cm)
				cm=count;
				me=arr[i];
		}
		else
		{
			count =1;
		}
	}
	if(cm>n/2)
		cout<<"The majoourity element is "<<me<<" and has a count of "<<cm<<endl;
	else
	cout<<"No majourity element "<<endl;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	maj_element(arr,n);
}
