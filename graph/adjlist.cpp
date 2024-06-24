#include <bits/stdc++.h>
using namespace std;



void addEdge(vector<int> adj[],int s,int d){
    adj[s].push_back(d);
    adj[d].push_back(s);
}
//print graph
void printgraph(vector<int> adj[] ,int v){
     
     for(int i=0;i<v;i++){
        cout<<"vertex :"<<i<<":";

        for(auto x : adj[i]){
            cout<<"->"<<x;
        }cout<<endl;
     }
}
int main(){
    int v =5;
    vector<int> adj[v];
    //adding edges 
     addEdge(adj,0,1);
     addEdge(adj,3,4);
     addEdge(adj,2,3);
     addEdge(adj,0,2);
     addEdge(adj,1,2);
     printgraph(adj,v);
}