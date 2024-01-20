#include <vector> 
#include <iostream> 
using namespace std; 

class Graph {
    public:
        Graph(int nodes);
        vector<vector<int> > matrix; 
        void print_matrix();
        void BFS();
        void DFS();
};