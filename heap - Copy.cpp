#include<iostream>
#include<vector>
using namespace std;
class PriorityQueue
{
	vector<int> pq;
	public:
		PriorityQueue()
		{
			
		}
		bool isEmpty()
		{
			return pq.size() == 0
		}
		int getSize()//return no. of elements presen in priority queue
		{
			return pq.size();
		}
		int getMin()
		{
			if(isEmpty())
			{
				return 0;//priority queue is empty
				
			}
			return pq[0];
		}
		void insert(int element)
		{
			pq.push_back(element);
			int childIndex = pq.size()) -1 ;
			
			while(childindex > 0)
			{
			int parentIndex = (childIndex -1) / 2;
			if(pq[childIndex] < pq[parentIndex])
			{
				int temp = pq[childIndex];
				pq[childIndex] = pq[parentIndex];
				pq[parentIndex] = temp;
			}
			else
			{
				break;
			}
			childIndex = parentIndex;
		    }
		}
		void remMin()
		{
			int last=pq.size()-1
			int x=pq[last];//last element 
			int y=pq[0];//minimum element
			//swapping last and root node
			int temp=x;
			x=y;
			y=temp;
			pq.pop_back();//minimum element removed
			// now we have task tto balance min heap
			int parentIndex = 0;
			while(parentIndex < pq.size())
			{
				int lchildindex=-1;
				int rhildindex=-1;
				if(2*parentIndex+1<pq.size())
				lchildindex=2*parentIndex+1;
				if(2*parentIndex+2<pq.size())
				rhildindex=(2*parentIndex)+2;
			int childIndex;
			if(pq[lchildindex] <= pq[rhildindex] && lchildindex != -1  && rchildindex!=-1)//left child is smaller
			{
				childIndex = lchildindex;
			}
			else if(pq[lchildindex]> pq[rhildindex]  && lchildindex != -1  && rchildindex!=-1)
			{
				childIndex = rchildindex;
			}
			else if(rchildindex==-1)
			{
				childIndex = lchildindex;
			}
			else
			{
				break;
			}
			if(pq[childIndex] < pq[parentIndex])
			{
				int temp = pq[childIndex];
				pq[childIndex] = pq[parentIndex];
				pq[parentIndex] = temp;
			}
//			else
//			{
//				break;
//			}
			parentIndex=childIndex;
		    }
		}
};
int main()
{
	
}
