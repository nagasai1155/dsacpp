#include <iostream>
using namespace std;

class Graph{
    public:
    bool** adjMatrix;
    int vertices;

    public:
    //initialization the matrix to zero
    Graph(int vertices1){
        vertices= vertices1;
        adjMatrix = new bool* [vertices];
        for(int i=0;i<vertices;i++){
            adjMatrix[i] = new bool[vertices];
            for(int j=0;j<vertices;j++)
            adjMatrix[i][j] = false;
        }
    }

    //adding edges
    void addEdge(int i,int j){
        adjMatrix[i][j] = true;
        adjMatrix[j][i] = true;
    }
    void removeEdge(int i,int j){
        adjMatrix[i][j] = false;
        adjMatrix[j][i] = false;
    }

    void tostring(){
        for(int i=0;i<vertices;i++){
            cout<<i<<":";
            for(int j=0;j<vertices;j++)
            {
                cout<<adjMatrix[i][j]<<" ";

            }
           cout<<endl;
        }
         
    }
    Graph(){
        for(int i=0;i<vertices;i++){
            delete[] adjMatrix[i];
            delete[] adjMatrix;
        }
    }

};
int main(){
    Graph g(3);
    g.addEdge(0,2);
    g.addEdge(2,2);
    g.addEdge(0,1);

g.tostring();
    return 0;
}