#include <bits/stdc++.h>

class Edge {
public:
  int source;
  int dest;
  int weight;
};

bool compare(Edge e1, Edge e2) { return e1.weight < e2.weight; }

int findParent(int v, int *parent) {
  if (parent[v] == v) {
    return v;
  }
  return findParent(parent[v], parent);
}
void Kruskal(Edge *input, int n, int E) {
  // Sort the input array - accending order based on weights
  std::sort(input, input + E, compare);

  Edge *output = new Edge[n - 1];
  int *parent = new int[n];

  for (int i = 0; i < n; i++) {
    parent[i] = i;
  }

  int count = 0;
  int i = 0;
  while (count != n - 1) {
    Edge currentEdge = input[i];

    // Check if we can add the currentEdge in MST or not
    int sourceParent = findParent(currentEdge.source, parent);
    int destParent = findParent(currentEdge.dest, parent);

    if (sourceParent != destParent) {
      output[count] = currentEdge;
      count++;
      parent[sourceParent] = destParent;
    }
    i++;
  }
  for (int i = 0; i < n - 1; i++) {
    std::cout << std::endl;
    if (output[i].source < output[i].dest) {
      std::cout << output[i].source << " " << output[i].dest << " "
                << output[i].weight << std::endl;
    } else {
      std::cout << output[i].dest << " " << output[i].source << " "
                << output[i].weight << std::endl;
    }
  }
}
int main() {
  int n, E;
  std::cin >> n >> E;
  Edge *input = new Edge[E];

  for (int i = 0; i < E; i++) {
    int s, d, w;
    std::cin >> s >> d >> w;
    input[i].source = s;
    input[i].dest = d;
    input[i].weight = w;
  }

  Kruskal(input, n, E);
}
