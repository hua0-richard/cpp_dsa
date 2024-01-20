#include "graph.h"
using namespace std; 

Graph::Graph(int nodes) {
    for (int i = 0; i < nodes; i++) {
        vector<int> v (nodes, -1);
        matrix.push_back(v);
    }
}

void Graph::print_matrix() {
    for (vector<int> adjacents: matrix) {
        for (int node: adjacents) {
            cout << node;
            cout << " "; 
        }
        cout << endl; 
    }
}

int main() {
    Graph g = Graph(5);
    g.print_matrix();
}