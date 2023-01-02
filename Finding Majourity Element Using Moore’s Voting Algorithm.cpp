#include<iostream>
using namespace std;
int findcand(int a[], int size)
{
	int maj_ind=0,count =1;
	for(int i=1;i<size;i++)
	{
		if(a[maj_ind]==a[i])
		{
			count++;
		}
		else
		{
			count--;
		}
		if(count==0)
		{
			maj_ind=i;
			count=1;
		}
	}
	return a[maj_ind];
}
bool ismaj(int a[], int size,int c)
{
	int count=0;
	for(int i=0;i<size;i++)
	{
		if(a[i]==c)
		count++;
	}
	if(count>size/2)
		return true;
	else
		return false;
}
void printMajority(int a[], int size)
{
	int c=findcand(a,size);
	if(ismaj(a,size,c))
		cout<<" "<<c<<" ";
	else
		cout<<"No majourity element"<<endl;
}
int main()
{
    int a[] = { 1, 3, 3, 1, 2 ,3,3,3,3};
    int size = (sizeof(a)) / sizeof(a[0]);
  
    // Function calling
    printMajority(a, size);
  
    return 0;
}
