#include <bits/stdc++.h>

using namespace std;

double main(){
  
  vector<vector<int>> positions = {{1, 1}, {3, 3}};
  double sum = 0;
  double x, y;
  for (int i = 0; i < positions.size(); i++){
    x += positions[i][0];
    y += positions[i][1];
  }
  x /= positions.size();
  y /= positions.size();
  for (int i = 0; i < positions.size(); i++){
    sum += sqrt((positions[i][0] - x)*(positions[i][0] - x) + (positions[i][1] - y)*(positions[i][1] - y));
  }
  return sum;
}
