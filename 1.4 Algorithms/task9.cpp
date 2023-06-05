#include <iostream>
#include <queue>
#include <vector>

class Graph {
    int numVertices;
    std::vector<std::vector<int>> adjacencyList;

public:
    Graph(int vertices) : numVertices(vertices), adjacencyList(vertices) {}

    void addEdge(int src, int dest) {
        adjacencyList[src].push_back(dest);
    }

    void BFS(int startVertex) {
        std::vector<bool> visited(numVertices, false);
        std::queue<int> queue;

        visited[startVertex] = true;
        queue.push(startVertex);

        while (!queue.empty()) {
            int currentVertex = queue.front();
            std::cout << currentVertex << " ";
            queue.pop();

            for (int adjacentVertex : adjacencyList[currentVertex]) {
                if (!visited[adjacentVertex]) {
                    visited[adjacentVertex] = true;
                    queue.push(adjacentVertex);
                }
            }
        }
    }
};

int main() {
    Graph graph(6);

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 4);
    graph.addEdge(3, 4);
    graph.addEdge(3, 5);
    graph.addEdge(4, 5);

    std::cout << "Breadth First Traversal (starting from vertex 0): ";
    graph.BFS(0);
    std::cout << std::endl;

    return 0;
}
