

// write a dijkstra algorithm in C++ 

#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;

// write a class for dijkstra

class Dijkstra {
   public:
      // write a dijkstra algorithm in C++ using lambda expressions
      void dijkstra(vector<vector<int>> &graph, int src) {
         int V = graph.size();
         vector<int> dist(V, INT_MAX);
         dist[src] = 0;
         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
         pq.push({0, src});
         while(!pq.empty()) {
            int u = pq.top().second;
            pq.pop();
            for(int v = 0; v < V; v++) {
               if(graph[u][v] && dist[v] > dist[u] + graph[u][v]) {
                  dist[v] = dist[u] + graph[u][v];
                  pq.push({dist[v], v});
               }
            }
         }
         cout << "Vertex Distance from Source" << endl;
         for(int i = 0; i < V; i++) {
            cout << i << "\t\t" << dist[i] << endl;
         }
      }
};

// test this function
int main() {
   vector<vector<int>> graph = {
      {0, 4, 0, 0, 0, 0, 0, 8, 0},
      {4, 0, 8, 0, 0, 0, 0, 11, 0},
      {0, 8, 0, 7, 0, 4, 0, 0, 2},
      {0, 0, 7, 0, 9, 14, 0, 0, 0},
      {0, 0, 0, 9, 0, 10, 0, 0, 0},
      {0, 0, 4, 14, 10, 0, 2, 0, 0},
      {0, 0, 0, 0, 0, 2, 0, 1, 6},
      {8, 11, 0, 0, 0, 0, 1, 0, 7},
      {0, 0, 2, 0, 0, 0, 6, 7, 0}
   };
   Dijkstra d;
   d.dijkstra(graph, 0);
}


