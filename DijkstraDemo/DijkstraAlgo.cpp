#include <algorithm>
#include <climits>
#include <iostream>

int findMinVertex(int *distance, bool *visited, int n) {
  int MinVertex = -1;
  for (int i = 0; i < n; i++) {
    if (!visited[i] && (MinVertex == -1 || distance[i] < distance[MinVertex])) {
      MinVertex = i;
    }
  }
  return MinVertex;
}

void dijkstra(int **edges, int n) {
  int *distance = new int[n];
  bool *visited = new bool[n];

  for (int i = 0; i < n; i++) {
    distance[i] = INT_MAX;
    visited[i] = false;
  }

  distance[0] = 0;
  for (int i = 0; i < n - 1; i++) {
    int MinVertex = findMinVertex(distance, visited, n);
    visited[MinVertex] = true;
    for (int j = 0; j < n; j++) {
      if (edges[MinVertex][j] != 0 && !visited[j]) {
        int dist = distance[MinVertex] + edges[MinVertex][j];
        if (dist < distance[j]) {
          distance[j] = dist;
        }
      }
    }
  }
  std::cout << std::endl;
  for (int i = 0; i < n; i++) {
    std::cout << i << " " << distance[i] << std::endl;
  }
  delete[] visited;
  delete[] distance;
}

int main() {
  int n;
  int e;
  std::cin >> n >> e;
  int **edges = new int *[n];
  for (int i = 0; i < n; i++) {
    edges[i] = new int[n];
    for (int j = 0; j < n; j++) {
      edges[i][j] = 0;
    }
  }

  for (int i = 0; i < e; i++) {
    int f, s, weight;
    std::cin >> f >> s >> weight;
    edges[f][s] = weight;
    edges[s][f] = weight;
  }

  std::cout << std::endl;
  dijkstra(edges, n);

  for (int i = 0; i < n; i++) {
    delete[] edges[i];
  }
  delete[] edges;
}
