#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// Structure to represent an edge in the graph
struct Edge {
    int destination;
    int weight;
};

// Perform BFS on a weighted graph
void BFS(vector<vector<Edge>>& graph, int source) {
    int numVertices = graph.size();
    vector<bool> visited(numVertices, false); // Track visited vertices
    queue<int> q; // Queue for BFS traversal

    visited[source] = true; // Mark the source vertex as visited
    q.push(source);

    while (!q.empty()) {
        int currentVertex = q.front();
        q.pop();
        cout << currentVertex << " ";

        // Process all adjacent vertices of the current vertex
        for (const Edge& edge : graph[currentVertex]) {
            int neighbor = edge.destination;

            // If the neighbor is not visited, mark it as visited and enqueue it
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int numVertices, numEdges;
    cout << "Enter the number of vertices: ";
    cin >> numVertices;

    cout << "Enter the number of edges: ";
    cin >> numEdges;

    vector<vector<Edge>> graph(numVertices);

    cout << "Enter the edges (source, destination, weight):\n";
    for (int i = 0; i < numEdges; ++i) {
        int source, destination, weight;
        cin >> source >> destination >> weight;

        // Add edge to the graph
        Edge edge;
        edge.destination = destination;
        edge.weight = weight;
        graph[source].push_back(edge);
    }

    int sourceVertex;
    cout << "Enter the source vertex: ";
    cin >> sourceVertex;

    cout << "BFS traversal starting from vertex " << sourceVertex << ": ";
    BFS(graph, sourceVertex);

    return 0;
}
