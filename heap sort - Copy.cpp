#include<iostream>
#include<vector>
using namespace std;
#define SIZE 1001
int heap[SIZE];
int heapsize;
void  heapify(vector<int> & h,int curr,int size)
{
	int largest=curr;
	int l = 2*curr + 1;
	int r = 2*curr + 2;
	if(l<size and h[l] > h[largest])
	largest =l;
	if(r<size and heap[r]>h[largest])
	largest =r;
	if (largest != curr)
	{
		int temp=h[curr];
		h[curr]=h[largest];
		h[largest]=temp;
		
		heapify(h,largest,size);
	}
}
//void heapsort(vector <int> & heap)
//{
//	for(int i= heap.size()/2 - 1;i >=1;i--)
//        {
//        	heapify(heap,i,heap.size());
//        }
//    for(int i=heap.size()-1;i>0;i--)
//    {
//    	int temp=heap[0];
//    	heap[0]=heap[i];
//    	heap[i]=temp;
//    	
//    	heapify(heap,0,i);
//    	
//	}
//}
void  heap_push(int val)
{
	if(heapsize>=SIZE)
	{
		cout<<"Overflow"<<endl;
		return ;
	}
	heap[heapsize]=val;//pushing fisrt element to end of the heap
	int curr=heapsize;
	//prelocate up
	while(curr>0 and heap[(curr-1)/2]<heap[curr])
	{
		int temp=heap[(curr-1)/2];
		heap[(curr-1)/2]=heap[curr];
		heap[curr]=temp;
		curr = (curr-1)/2; //current pointer moves to parent 
		
	}
	
	heapsize+=1;
}

int heap_pop()
{
	if(heapsize<=0)
	{
		cout<<"Underflow..."<<endl;
		return -1;
	}
	int curr=0;//current index is 0  which is stoorin nmaz element
	int popped= heap[0];
	heap[0]=heap[heapsize-1];//copy last element to rrott
	heapsize-=1;//reduce heap size by 1
	while(2*curr+1<heapsize)
    {
    	heapify(heap,curr,heapsize);
        curr=curr+1;	
    }
    return popped; 
}
void show_heap()
{
	for(int i=0;i<heapsize;i++)
	{
		cout<<heap[i]<<" ";
		cout<<endl;
	}
}
void init()
{
	heapsize=0;
}
int main()
{
	vector<int> heap;
	cout<<"1. Push"<<endl<<"2. pop"<<endl<<"3. show heap"<<endl<<"Terminate"<<endl;
	int option;
	int element;
	cout<<"Enter your choice"<<endl;
	cin>>option;
	switch(option)
	{
		case 1 :
			cout<< "Enter element\n";
			cin>>element;
			heap_push(element);
			break;
			case 2 :
				cout<<"Popped"<<heap_pop()<<"\n"<<endl;
				break;
			case 3:
				show_heap();
				break;
			default:
				return 0;
	}
}
	
	
//	heap.push_back(9);
//	heap.push_back(6);
//    heap.push_back(8);
//    heap.push_back(2);
//    heap.push_back(1);
//    heap.push_back(4);
//    heap.push_back(3);
//	//{ 9,6,8,2,1,4,3 };
//	heapsort(heap);
	
//	cout<<"Heap in Ascending is : \n";
//	for(int i=0;i<heap.size();i++)
//	{
//		cout<<heap[i]<<" ";
//		return 0;
//	}
