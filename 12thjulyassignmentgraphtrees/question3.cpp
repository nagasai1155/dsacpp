#include <iostream>
#include<bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;

typedef pair<int, int> pii;

class Graph {
public:
    int V;
    vector<vector<pii>> adj;

    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v, int w) {
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    int primMST() {
        priority_queue<pii, vector<pii>, greater<pii>> pq;
        vector<int> key(V, INT_MAX);
        vector<bool> inMST(V, false);

        int src = 0; // Start from vertex 0
        pq.push({0, src});
        key[src] = 0;

        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();
            inMST[u] = true;

            for (auto it : adj[u]) {
                int v = it.first;
                int weight = it.second;
                if (!inMST[v] && weight < key[v]) {
                    key[v] = weight;
                    pq.push({key[v], v});
                }
            }
        }

        int sum = 0;
        for (int i = 0; i < V; ++i)
            sum += key[i];

        return sum;
    }
};

int main() {
    int V, E;
    cout<<"enter veritces and edges: ";
    cin >> V >> E;
    Graph g(V);
    for (int i = 0; i < E; ++i) {
        cout<<"enter edge 1 and edge 2 and weight: ";
        int u, v, w;
        cin >> u >> v >> w;
        g.addEdge(u, v, w);
    }

    int mstWeight = g.primMST();
    cout << "Sum of weights in MST: " << mstWeight << endl;

    return 0;
}
