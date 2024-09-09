#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class DisjointSet{
    vector<int> rank,parent;
    public:
     DisjointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i] =i;
        }
     }
     int findParent(int node){
        if(node== parent[node]) return node;
        return parent[node] = findParent(parent[node]);
     }
     void unionbyRank(int u,int v){
        int ulp_u=findParent(u);
        int ulp_v = findParent(v);
        if(ulp_u== ulp_v) return;
        else if(rank[ulp_v] < rank[ulp_u]){
           parent[ulp_v] = ulp_u;
        }else if(rank[ulp_v] > rank[ulp_u]){
            parent[ulp_u] = ulp_v;
        }else{
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
     }
      
};
int main(){
      
      DisjointSet db(7);
      db.unionbyRank(1,2);
      db.unionbyRank(2,3);
      db.unionbyRank(4,5);
      db.unionbyRank(6,7);
      db.unionbyRank(5,6);
      if(db.findParent(3)== db.findParent(7)){
        cout<<"same";
      }else cout<<"not same"<<endl;
      db.unionbyRank(3,7);
        if(db.findParent(3)== db.findParent(7)){
        cout<<"same";
      }else cout<<"not same";

}