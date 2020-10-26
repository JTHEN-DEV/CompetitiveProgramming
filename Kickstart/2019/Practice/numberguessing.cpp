#include <bits/stdc++.h>

using namespace std;

int main(){
  long long t, e, a, b, n;
  string s;
  cin >> t;
  for (long long i = 0; i < t; i++){
    cin >> a >> b >> e;
    s = "";
    a++;
    n = (a+b)/2;
    do{
      if (s == "TOO_SMALL"){
        a = n;
      } else if (s == "TOO_BIG"){
        b = n;
      } else if (s == "WRONG_ANSWER"){
        return 1;
      }
      n = (a+b)/2;
      cout << n << endl;
      fflush(stdout);
      cin >> s;
    } while (s != "CORRECT");
  }
}
