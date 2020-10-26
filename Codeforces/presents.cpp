#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, a;
  cin >> n;
  int ar [n];
  for (int i = 0; i < n; i++){
    cin >> a;
    ar[a-1] = i+1;
  }
  for (int b = 0; b < n; b++){
    cout << ar[b] << " ";
  }
}
