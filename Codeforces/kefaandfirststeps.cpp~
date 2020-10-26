#include <bits/stdc++.h>

using namespace std;

int main(){
  long long int n, a, prev, s, t;
  cin >> n;
  prev = 0;
  s = 0;
  t = 0;
  for (long long int i = 0; i < n; i++){
    cin >> a;
    if (a >=prev){
      prev = a;
      s++;
    } else {
      s = 1;
      prev = a;
    }
    if (t < s){
      t = s;
    }
}
  cout << t;
}
