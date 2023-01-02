//method 1 by simply comparing each element one by one and assinging to min and max
//method 2 dividing the array in subsequesnt 2 arrays consequetively by recursion aand then finding their min and max and then comparing their min and max
// method 3 by comparing in pairs
//method 3 is best
//method 3 it is
#include<iostream>
using namespace std;
struct Pair
{
	public:
    int min;
    int max;
};
struct Pair func(int *a,int n)
{
	Pair minmax;
	int i;
	if(n%2==0)//even
	{
		if(a[1]<a[0])
		{
			minmax.min=a[1];
			minmax.max=a[0];
		}
		else
		{
			minmax.max=a[1];
			minmax.min=a[0];
		}
		i=2;
    }
	else
	{
		minmax.min = a[0];
        minmax.max = a[0];
        i=1;
	}
	
	while(i<n-1)
	{
		if(a[i]>a[i+1])
		{
			if(a[i]>minmax.max)
				minmax.max=a[i];
			if(a[i+1]<minmax.min)
			    minmax.min=a[i+1];
		}
		else
		{
			if(a[i]<minmax.min)
				minmax.min=a[i];
			if(a[i+1]>minmax.max)
			    minmax.max=a[i+1];
		}
		i+=2;	
	}	
	return minmax;
}
int main()
{
	int n;
	int a[n];
	cout<<"Enter the number of elements in the array"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
    }
    Pair minMax=func(a,n);
	cout<<"Max is "<<minMax.max<<endl;
	cout<<"Min is "<<minMax.min<<endl;
	
}
