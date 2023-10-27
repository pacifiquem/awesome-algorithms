#include <iostream>
#include <vector>
#include <climits>

#define V 5  // Number of vertices

int minDistance(const std::vector<int>& dist, const std::vector<bool>& sptSet) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++) {
        if (!sptSet[v] && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }

    return min_index;
}

void printSolution(const std::vector<int>& dist) {
    std::cout << "Vertex \t Distance from Source" << std::endl;
    for (int i = 0; i < V; i++) {
        std::cout << i << " \t " << dist[i] << std::endl;
    }
}

void dijkstra(const std::vector<std::vector<int>>& graph, int src) {
    std::vector<int> dist(V);
    std::vector<bool> sptSet(V, false);

    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
    }

    dist[src] = 0;

    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, sptSet);
        sptSet[u] = true;

        for (int v = 0; v < V; v++) {
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX &&
                dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printSolution(dist);
}

int main() {
    std::vector<std::vector<int>> graph = {{0, 4, 0, 0, 0},
                                           {4, 0, 8, 0, 0},
                                           {0, 8, 0, 7, 0},
                                           {0, 0, 7, 0, 9},
                                           {0, 0, 0, 9, 0}};

    int src = 0;  // Replace with the desired source vertex
    dijkstra(graph, src);
    return 0;
}
