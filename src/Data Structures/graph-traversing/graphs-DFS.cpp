#include <iostream>
#include <vector>

using namespace std;

// A structure to represent a graph
struct Graph {
  int V; // Number of vertices
  vector<vector<int>> adj; // Adjacency list

  // Constructor
  Graph(int V) {
    this->V = V;
    adj.resize(V);
  }

  // Add an edge to the graph
  void addEdge(int u, int v) {
    adj[u].push_back(v);
  }

  // DFS traversal of the graph
  void DFS(int s) {
    // Mark all the vertices as not visited
    bool visited[V];
    memset(visited, false, sizeof(visited));

    // Create a stack for DFS
    stack<int> st;

    // Mark the source vertex as visited and push it onto the stack
    visited[s] = true;
    st.push(s);

    // Loop while the stack is not empty
    while (!st.empty()) {
      // Pop the top vertex from the stack
      int u = st.top();
      st.pop();

      // Print the vertex
      cout << u << " ";

      // Iterate over all the adjacent vertices of the popped vertex
      for (int v : adj[u]) {
        // If the adjacent vertex is not visited, mark it visited and push it onto the stack
        if (!visited[v]) {
          visited[v] = true;
          st.push(v);
        }
      }
    }
  }
};

int main() {
  // Create a graph with 5 vertices
  Graph g(5);

  // Add edges to the graph
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 3);
  g.addEdge(2, 3);
  g.addEdge(3, 4);

  // Print the DFS traversal of the graph
  g.DFS(0);

  return 0;
}