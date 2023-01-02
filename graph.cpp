#include<iostream>
#include<queue>
#include<vector>
using namespace std;

vector<int> a;
vector <int> getPathDFS(int ** edges, int n , int x,int y,bool *visited)
{
    if(y==x)
    {
        vector<int> v;
        v.push_back(x);
        return v;
    }
    visited[x]=true;
    for(int i=0;i<n;i++)
    {
        if(i==x)
        {
            continue;
        }
        if(edges[x][i] && !visited[i])
        {
            vector<int> vs=getPathDFS(edges,n,i,y,visited);
            if(vs.size()!=0)
                vs.push_back(x);
            return vs;
        }
    }
    return a;
}



void printDFS(int **edges, int n,int sv,bool *visited)
{
	cout<<sv<<" ";
	visited[sv]=true;
	for(int i=0;i<n;i++)
	{
		if(i==sv)
		{
			continue;
		}
		if(edges[sv][i] == 1)
		{
			if(visited[i])
			{
				continue;
			}
			printDFS(edges,n,i,visited);
		}
	}
}



void printBFS(int **edges, int n,int e,int sv,bool* visited)
{
    queue<int> q;
    if(e==0)
    {
        for(int i=0;i<n;i++)
        {
            cout<<i<<" ";
        }
        return ;
    }
    q.push(sv);
    visited[sv]=true;
    while(!q.empty())
    {
        int f=q.front();
        // visited[f]=true;
        q.pop();
        cout<<f<<" ";
        for(int i=0;i<n;i++)
        {
            if(edges[f][i] && !visited[i] && f!=i)
            {
                q.push(i); 
                visited[i]=true;
            }
        }
    }  
}



void BFS(int **edges,int n,int e)
{
	bool* visited=new bool[n];
	for(int i=0;i<n;i++)
	{
		visited[i]=false;
	}
	for(int i=0;i<n;i++)
	{
		if(!visited[i])
			printBFS(edges,n,e,i,visited);
	}
	 
	 delete [] visited;
}




void DFS(int **edges,int n )
{
	bool* visited=new bool[n];
	for(int i=0;i<n;i++)
	{
		visited[i]=false;
	}
	for(int i=0;i<n;i++)
	{
		if(!visited[i])
			printDFS(edges,n,i,visited);
	}
	 
	 delete [] visited;
}




int main()
{
	int n;
	int e;
	cin>>n>>e;
	int ** edges=new int*[n];
	for(int i=0;i<n;i++)
	{
		edges[i]=new int[n];
		for(int j=0;j<n;j++)
		{
			edges[i][j]=0;
		}
	}
	for(int i=0;i<e;i++)
	{
		int f,s;
		cin>>f>>s;
		edges[f][s]=1;
		edges[s][f]=1;
	}
//	DFS(edges,n);
//	cout<<endl;
//	cout<<endl;
//	BFS(edges,n,e);
	int x,y;
    cin>>x>>y;
    bool * visited=new bool [n];
    for(int i=0;i<n;i++)
    {
        visited[i]=false;
    }
    vector<int> v = getPathDFS(edges,n,x,y,visited);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

	
}
