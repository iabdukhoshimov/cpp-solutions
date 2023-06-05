#include <iostream>
#include <list>

class Graph {
private:
    int numVertices;
    std::list<int>* adjList;

public:
    Graph(int vertices) {
        numVertices = vertices;
        adjList = new std::list<int>[numVertices];
    }

    void addEdge(int src, int dest) {
        adjList[src].push_back(dest);
        adjList[dest].push_back(src);
    }

    void printGraph() {
        for (int v = 0; v < numVertices; ++v) {
            std::cout << "Adjacency list of vertex " << v << ": ";
            for (const auto& vertex : adjList[v]) {
                std::cout << vertex << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    int numVertices = 5;
    Graph graph(numVertices);

    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);

    graph.printGraph();

    return 0;
}
