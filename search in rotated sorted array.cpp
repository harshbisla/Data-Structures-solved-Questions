#include<iostream>
using namespace std;
int search(int * array, int start_index, int end_index, int element){
   while (start_index <= end_index){
      int middle = start_index + (end_index- start_index )/2;
      if (array[middle] == element)
         return middle;
      if (array[middle] < element)
         start_index = middle + 1;
      else
         end_index = middle - 1;
   }
   return -1;
}
int fpivot(int *nums ,int f,int l)
{
	if(f>l)
	{
		return -1;
	}
	if(f==l)
	{
		return f;
	}
	int mid=(f+l)/2;
	if(mid>f && nums[mid]<nums[mid-1])
        {
            return mid-1;
        }
    if(mid<l && nums[mid]>nums[mid+1])
        {
            return mid;
        }
    if(nums[l]>nums[mid])
    {
    	return fpivot(nums,f,mid);
	}
	else
	{
		return fpivot(nums,mid+1,l);
	}
    
}
    int ss(int *nums, int t) {
        int p=fpivot(nums,0,5);
        if(nums[p]==t)
        {
        	return p;
		}
		else if(p==-1)
		{
			search(nums,0,5,t);
		}
		else if(nums[0]<=t)
		{
			search(nums,0,p-1,t);
		}
		else
		{
			search(nums,p+1,5,t);
		}
    }
int main()
{
	int nums[10] ={20,30,40,50,60,10};
	int t=10;
	cout<<ss(nums,t);
	
}

