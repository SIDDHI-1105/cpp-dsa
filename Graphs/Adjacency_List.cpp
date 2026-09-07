#include <iostream>
#include <vector>
using namespace std;

class graphs {
    int node;
    vector<int> *adj;

public:

    graphs(int node) {
        this->node = node;

        adj = new vector<int>[node];
    }

    void addedge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void print() {
        for(int i = 0; i < node; i++) {

            cout << i << " -> ";

            for(int j = 0; j < adj[i].size(); j++) {
                cout << adj[i][j] << " ";
            }

            cout << endl;
        }
    }
};

int main() {

    int node;

    cout << "Enter the number of nodes in the graph: ";
    cin >> node;

    graphs g(node);

    cout << "Graph created with "
         << node << " vertices" << endl;

    cout << "Enter the number of edges in the graph: ";

    int edges;
    cin >> edges;

    cout << "Enter the edges (u v) for each edge:" << endl;

    for(int i = 0; i < edges; i++) {

        int u, v;
        cin >> u >> v;

        g.addedge(u, v);
    }

    cout << "Edges added to the graph." << endl;

    g.print();

    return 0;
}