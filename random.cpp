#include<bits/stdc++.h>
using namespace std;


pair<int,int> ending(vector<int> temporary,int start, int e){
// pair function

    int even=-1,odd =-1;

    int cur =e;
    while(cur>=start)
    {
        if(even==-1 && temporary[cur]%2==0){
            even=cur;
        }
        if(odd==-1 && temporary[cur]%2){
            odd= cur;
        }
        cur--;
    }

    return {even,odd};
}

pair<int,int> starting_n(vector<int> temporary,int start, int e){

    int e =-1,o =-1;

    int cur =start;
    while(cur<= e){
        if(e==-1 && temporary[cur]<0){
            e =cur;
        }
        if(o==-1 && temporary[cur]>=0){
            o= cur;
        }
        cur++;
    }

    return {e,o};
}


pair<int,int> starting(vector<int> temporary,int start, int e){

    int even =-1,odd =-1;

    int cur =start;
    while(cur<= e){
        if(even==-1 && temporary[cur]%2==0){
            even =cur;
        }
        if(odd==-1 && temporary[cur]%2){
            odd= cur;
        }
        cur++;
    }
    return {even,odd};
}

pair<int,int> ending_n(vector<int> temporary,int start, int e){

    int even=-1,odd=-1;

    int cur =e;
    while(cur>=start)
    {
        if(even==-1 && temporary[cur]<0){
            even=cur;
        }
        if(odd==-1 && temporary[cur]>=0){
            odd= cur;
        }
        cur--;
    }

    return {even,odd};
}



int main(){
    int n;
    cin>>n; 
    vector<int> arr(n,0);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(n==1){
        cout<<arr[0]<<"\n";
        return;
    }

    // checking condition
    vector<int> temporary (n,0);
    temporary[0]= arr[0];
    
    temporary[n-1] =arr[1];

    queue<pair<int,int>>q;
    q.push({0,n-1});

    vector<bool> visited(n,false);

    visited[0] = true;
    visited[n-1]= true;

    int i= 2;

    while(i<n && !q.empty()){

        auto t = q.front();
        q.pop();

        if(t.first>t.second){
            continue;
        }

        if(t.first==t.second && visited[t.first]){
            continue;
        }
        
        int mid = (t.first + t.second)/2;

        if(visited[mid]==false){
            temporary[mid]= arr[i];
            i++;
            visited[mid]= true;
        }
        
        q.push({t.first,mid});
        q.push({mid,t.second}); 
    }
    
    arr= temporary;

    int start= 0 ,e =n-1;

    // points are following as
    while(true){

        // for starting case
        auto t = starting(arr,start,e);

        if(t.first==-1 || t.second==-1){
            break;
        }
        else{
            arr[max(t.first,t.second)]= arr[t.first]+ arr[t.second];
            start++;
        }

        // for ending case

        t = ending(arr,start,e);

        if(t.first==-1 || t.second==-1){
            break;
        }
        else{
            arr[min(t.first,t.second)]= arr[t.first]+ arr[t.second];
            e--;
        }
        
    }


    while(1){

        auto t = starting_n(arr,start,e);

        if(t.first==-1 || t.second==-1){
            break;
        }
        else{
            arr[max(t.first,t.second)]= arr[t.first]+ arr[t.second];
            start++;
        }
        t = ending_n(arr,start,e);

        if(t.first==-1 || t.second==-1){
            break;
        }
        else{
            arr[min(t.first,t.second)]= arr[t.first]+ arr[t.second];
            e--;
        }
        
    }

    while(true){

        auto t = starting(arr,start,e);

        if(t.first==-1 || t.second==-1){
            break;
        }
        else{
            arr[max(t.first,t.second)]= arr[t.first]+ arr[t.second];
            start++;
        }

        t = ending(arr,start,e);

        if(t.first==-1 || t.second==-1){
            break;
        }
        else{
            arr[min(t.first,t.second)]= arr[t.first]+ arr[t.second];
            e--;
        }
        
    }


    
    temporary.clear();
    unordered_map<int,int> mp1;
    for(int i=start;i<=e;i++){
        mp1[arr[i]]++;
    }
    for(int i=start;i<=e;i++){

        if(mp1[arr[i]]==1){
            temporary.push_back(arr[i]);
            mp1[arr[i]]=1;
        }
        else if(mp1[arr[i]]>1){
            mp1[arr[i]]--;
        }
    }
    
    for(auto i:temporary){
        cout<<i<<" ";
    }
    cout<<"\n"; 
    return 0;
}
