#include <iostream>
using namespace std;

class AdjacencyMatrix
{
private:
    int n;
    int **adj;

public:
    // Constructor to initialize an empty matrix
    AdjacencyMatrix(int n)
    {
        this->n = n;
        adj = new int *[n];
        for (int i = 0; i < n; i++)
        {
            adj[i] = new int[n];
            for (int j = 0; j < n; j++)
            {
                adj[i][j] = 0;
            }
        }
        display();
    }

    // Function to add an edge to the graph
    void add_edge(int origin, int destination)
    {
        if (origin > n || destination > n || origin <= 0 || destination <= 0)
        {
            cout << "Invalid edge!\n";
            return;
        }
        adj[origin - 1][destination - 1] = 1;
    }

    // Function to delete an edge from the graph
    void delete_edge(int origin, int destination)
    {
        if (origin > n || destination > n || origin <= 0 || destination <= 0)
        {
            cout << "Invalid edge!\n";
            return;
        }
        adj[origin - 1][destination - 1] = 0;
    }

    // Function to display the adjacency matrix
    void display()
    {
        cout << "Adjacency Matrix:\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << adj[i][j] << " ";
            cout << endl;
        }
        cout << endl;
    }
};

int main()
{
    int nodes, max_edges, origin, destination;
    cout << "Enter the number of nodes: ";
    cin >> nodes;

    // Create an instance of AdjacencyMatrix
    AdjacencyMatrix am(nodes);

    // Calculate the maximum number of edges in a graph
    max_edges = nodes * nodes;

    // Prompt the user to enter edges until they choose to exit
    for (int i = 0; i < max_edges; i++)
    {
        cout << "Edge number: " << i + 1 << endl;
        cout << "Enter an edge (-1 -1 to exit): " << endl;
        cout << "Enter the origin and destination vertices: ";
        cin >> origin >> destination;

        // Check if the user wants to exit
        if (origin == -1 || destination == -1)
            break;

        // Add the edge to the adjacency matrix
        am.add_edge(origin, destination);
    }

    // Display the final adjacency matrix
    am.display();

    return 0;
}

