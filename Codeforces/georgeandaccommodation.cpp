#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, a, b, sum;
  sum = 0;
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> a >> b;
    if (b-a >= 2){
      sum++;
    }
  }
  cout << sum;
}
