#include <bits/stdc++.h>

using namespace std;

int main(){
  int n = 3;
  vector<vector<int>> edges = {{0,1},{1,2},{0,2}};
  vector<double> succProb = [0.5,0.5,0.2];
  int start = 0;
  int end = 2;
  pair<double, int> p;
  for (int i = 0; i < n; i++){
    p[i].first() = succProb[i];
    p[i].second() = edges[i];
  }
  sort(p, p+n, greater<double>());
  for (int i = 0; i < n; i++){
    succProb[i] = p[i].first();
    edges[i] = p[i].second();
  }
  cout << succProb[0] << endl;
}
