// write a BFS algorithm in C++
// void BFS(vector<vector<int>> &adj, int s) {
//    int n = adj.size();
//    vector<bool> visited(n, false);
//    queue<int> q;
//    q.push(s);
//    visited[s] = true;
//    while(!q.empty()) {
//       int u = q.front();
//       q.pop();
//       cout << u << " ";
//       for(int v : adj[u]) {
//          if(!visited[v]) {
//             q.push(v);
//             visited[v] = true;
//          }
//       }

//    }
// }

// // test this function
// write a DFS algorithm in C++ in code without commenting
// void DFS(vector<vector<int>> &adj, int s) {



// write a function to parse a string date to a timestamp
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

// write a function to parse a string date to a timestamp
int parseDate(string date) {
   struct tm tm;
   strptime(date.c_str(), "%Y-%m-%d", &tm);
   return mktime(&tm);
}

// uncomment above code
// test this function    
int main() {
   string date = "2019-01-01";
   cout << parseDate(date) << endl;
}

// output
// 1546300800

// parse a string in C++ by using ','
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

// write a function to parse a string in C++ by using ','
vector<string> parseString(string str) {
   vector<string> result;
   stringstream ss(str);
   string token;
   while(getline(ss, token, ',')) {
      result.push_back(token);
   }
   return result;
}

/*
// test this function
int main() {
   string str = "1,2,3,4,5";
   vector<string> result = parseString(str);
   for(string s : result) {
      cout << s << " ";
   }
   cout << endl;
}
*/