#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> adj[],int a,int b){
    adj[a].push_back(b);
    adj[b].push_back(a);
}
vector<int> bfsGraph(int v,vector<int> adj[]){
    int arr[v] ;
    memset(arr,0,sizeof(arr));
    queue<int> q;
    arr[0]=1;
    q.push(0);
    vector<int> bfs;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it: adj[node]){
            if(!arr[it]){
                arr[it] =1;
                q.push(it);
            }
        }

    }
    return bfs;
}
int main(){
  
  int v =6;
  vector<int> adj[v];
  addEdge(adj,0,1);
  addEdge(adj,0,2);
  addEdge(adj,1,5);
  addEdge(adj,2,3);
  addEdge(adj,1,4);
   
  vector<int> arrr = bfsGraph(v,adj);
  for(auto it: arrr){
    cout<<it<<" ";
  }

  

}