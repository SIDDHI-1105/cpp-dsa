#include <iostream>
using namespace std;

class graphs{
    int node;
    int **adj;
    public:

    graphs(int node){
        this->node = node;
        adj = new int*[node];
        for(int i =0; i< node; i++){
            adj[i] = new int[node];
        
        for(int j = 0 ; j< node; j++){
            adj[i][j] = 0;
        }
    }
    }
    void addedge(int u, int v){
        adj[u][v]=1;
        adj[v][u]=1;
    }
    int print(){
        for(int i = 0; i< node; i++){
            for(int j = 0; j< node; j++){
                cout<<adj[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int node;
    cout << "Enter the number of nodes in the graph: ";
    cin >> node;
    graphs g(node);
    cout<<"Graph created with "<<node<<" vertices"<<endl;
    
    cout << "Enter the number of edges in the graph: ";
    int edges;
    cin >> edges;
    cout << "Enter the edges (u v) for each edge:" << endl;
    for(int i = 0; i < edges; i++){
        int u, v;
        cin >> u >> v;
        g.addedge(u, v);
    }
    cout << "Edges added to the graph." << endl;


    g.print();
    return 0;
}