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

  // BFS traversal of the graph
  void BFS(int s) {
    // Mark all the vertices as not visited
    bool visited[V];
    memset(visited, false, sizeof(visited));

    // Create a queue for BFS
    queue<int> q;

    // Mark the source vertex as visited and add it to the queue
    visited[s] = true;
    q.push(s);

    // Loop while the queue is not empty
    while (!q.empty()) {
      // Dequeue the front vertex from the queue
      int u = q.front();
      q.pop();

      // Print the vertex
      cout << u << " ";

      // Iterate over all the adjacent vertices of the dequeued vertex
      for (int v : adj[u]) {
        // If the adjacent vertex is not visited, mark it visited and add it to the queue
        if (!visited[v]) {
          visited[v] = true;
          q.push(v);
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

  // Print the BFS traversal of the graph
  g.BFS(0);

  return 0;
}