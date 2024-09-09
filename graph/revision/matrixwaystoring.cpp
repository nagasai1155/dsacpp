#include<iostream>
using namespace std;

int main(){


    int n,m;
    cout<<"enter number nodes and edges :";
    cin>>n>>m;
    int arr[n+1][m+1]={0};
    for(int i=0;i<m;i++){
        cout<<"enter edges between the graphs : ";
        int v,u;
        cin>>v>>u;
        arr[v][u]=1;
        arr[u][v]=1;
    }
  cout<<"printing the graph : "<<endl;
  for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
  
}