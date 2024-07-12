#include <iostream>
#include <vector>
using namespace std;

class Graph {
    int V;
    vector<vector<int>> adj;

public:
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool isCyclicUtil(int v, int parent, vector<bool>& visited) {
        visited[v] = true;
        for (int u : adj[v]) {
            if (!visited[u]) {
                if (isCyclicUtil(u, v, visited))
                    return true;
            } else if (u != parent) {
                return true;
            }
        }
        return false;
    }

    bool isCyclic() {
        vector<bool> visited(V, false);
        for (int i = 0; i < V; ++i) {
            if (!visited[i]) {
                if (isCyclicUtil(i, -1, visited))
                    return true;
            }
        }
        return false;
    }
};

int main() {
    int V, E;
    cout<<"enter no. of vertices and edges : ";
    cin >> V >> E;
    Graph g(V);
    for (int i = 0; i < E; ++i) {
        int u, v;
        cout<<"enter edge between u and v :";
        cin >> u >> v;
        g.addEdge(u, v);
    }

    if (g.isCyclic())
        cout << "Graph contains a cycle.\n";
    else
        cout << "Graph does not contain a cycle.\n";

    return 0;
}
