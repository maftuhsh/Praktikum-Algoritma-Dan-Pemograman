#include <iostream>
#include <vector>
#include <stack>
using namespace std;
    vector<int> dfs(vector<vector<int>>& graph, int start) {
        vector<bool> visited(graph.size(), false);
        stack<int> s;
        vector<int> traversal;

        visited[start] = true;
        s.push(start);

        while (!s.empty()) {
            int current = s.top();
            s.pop();
            traversal.push_back(current);

            for (int neighbor : graph[current]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    s.push(neighbor);
                }
            }
        }
 return traversal;
}

    int main() {
// Contoh penggunaan
    vector<vector<int>> graph = {
        {1, 2}, // Tetangga dari simpul 0
        {0, 3, 4}, // Tetangga dari simpul 1
        {0, 5, 6}, // Tetangga dari simpul 2
        {1, 7, 8}, // Tetangga dari simpul 3
        {1, 9, 10}, // Tetangga dari simpul 4
        {2, 11, 12}, // Tetangga dari simpul 5
        {2, 13, 14},
        {3},
        {3},
        {4},
        {4},
        {5},
        {5},
        {6},
        {6},
    };
    int startNode = 5; // Simpul awal
            cout<<"Maftuh Siroj Hamdani"<<endl;
            cout<<"NIM : 2412050"<<endl;
            
    vector<int> result = dfs(graph, startNode);
        cout << "DFS Traversal from node versi angka 5 " << startNode << ": ";
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;
    return 0;
}