#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> adj[],int a,int b){
    adj[a].push_back(b);
    adj[b].push_back(a);

}
void printGraph(vector<int> adj[] ,int v){
    for(int i=0;i<v;i++){
        cout<<"vertices: "<<i<<":";
        for(auto it:adj[i]){
            cout<<"->"<<it<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int v=5;
    vector<int> adj[v];
    addEdge(adj,1,2);
    addEdge(adj,3,4);
    addEdge(adj,2,3);
    addEdge(adj,1,4);
    printGraph(adj,5);


}