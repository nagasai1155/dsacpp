#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adjs[],int v){
    for(int i=0;i<v;i++){
        cout<<"vertex :" <<i<<":";
        for(auto it : adjs[i]){
            cout<<"-> "<<it<<" ";
        }
        cout<<endl;
    }
}
int main(){

    int nodes =5;
    vector<int> adjs[nodes];

   addEdge(adjs,0,1);
   addEdge(adjs,0,2);
   addEdge(adjs,0,3);
   addEdge(adjs,1,2);
   addEdge(adjs,1,3);
   printGraph(adjs,5);

}