class Solution {
public:
    int findMin(vector<int>& nums) {
        int x=fm(nums ,0,nums.size()-1)+1;
        return nums[x];
            
    }
    int fm(vector<int>& arr,int low,int high)
    {
       //the min element will always be located at the pivot 
       // hence we have to find the number of rotations;
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
        return fm(arr, low, mid - 1);
    else
        return fm(arr, mid + 1, high);
           
    }
};
