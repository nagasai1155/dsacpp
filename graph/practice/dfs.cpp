#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> ls[],int v,int u){
    ls[v].push_back(u);
    ls[u].push_back(v);
    

}
vector<int> dfsTraversal(int v,vector<int> adj[],int arr[],vector<int> dfs){
    arr[v]=1;
    dfs.push_back(v);
    for(auto it: adj[v]){
        if(!arr[it]){
            dfsTraversal(it,adj,arr,dfs);
        }
    }
    return dfs;


}
int main(){


    int v=5;
    
    vector<int> ls[v];
    int vis[v]={0};
    int start =0;
    vector<int> dfs;
    addEdge(ls,0,1);
    addEdge(ls,1,2);
    addEdge(ls,2,3);
    addEdge(ls,1,3);
   vector<int> s= dfsTraversal(start,ls,vis,dfs);
   for(auto it: s){
    cout<<it<<" ";
   }
}