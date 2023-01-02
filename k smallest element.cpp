int kthSmallest(int arr[], int l, int r, int k)
    {//code here
       int max=arr[l];
       for(int i=l;i<=r;i++)
       {
           if(arr[i]>max)
           {
               max=arr[i];
           }
       }
       int a[max+1];
       for(int i=0;i<=max;i++)
       {
           a[i]=0;
       }
       for(int i=l;i<=r;i++)
       {
           a[arr[i]]+=1;
       }
       for(int i=1;i<=max;i++)
       {
           a[i]+=a[i-1];
       }
       for(int i=0;i<=max;i++)
       {
           if(a[i]==k)
           {
               return i;
               break;
           }
       }
      
    }

