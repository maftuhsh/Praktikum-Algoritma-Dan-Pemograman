#include <iostream>
#include <queue>
#include <stack>
using namespace std;

    vector<int> bfs(vector<vector<int>>& graph, int start) {
        vector<bool> visited(graph.size(), false);
        queue<int> q;
        vector<int> traversal;
    visited[start] = true;
        q.push(start);
        while (!q.empty()) {
            int current = q.front();
            q.pop();
            traversal.push_back(current);
 
    for (int neighbor : graph[current]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
    return traversal;
}
    int main() {
            cout<<"Ahmad Ismail Azzukhruf Zaen"<<endl;
            cout<<"NIM : 2412046"<<endl;
        vector<vector<int>> graph = {{1, 2},
                                    {0, 3, 4},
                                    {0, 5},
                                    {1},
                                    {1},
                                    {2}};
        vector<int> traversal = bfs(graph, 0);
        for (int node : traversal) {
            cout << node << " ";
        }
        return 0;
    }
