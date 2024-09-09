#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> arr[],int a,int b){
    arr[a].push_back(b);
    arr[b].push_back(a);
}
void print(vector<int> arr[],int v){
    for(int i=0;i<v;i++){
        cout<<" \n vertices "<<i<<" :";
        for(auto it : arr[i]){
            cout<<"->"<<it<<endl;
        }
    }
}
int main(){

    //storing a graph in adjlist and printing 

    int v;
    cout<<"enter number of vertices and edges : ";
    cin>>v;

    vector<int> arr[v+1];
    addEdge(arr,0,1);
    addEdge(arr,0,2);
    addEdge(arr,1,2);
    addEdge(arr,2,3);
    //
    print(arr,v);

}