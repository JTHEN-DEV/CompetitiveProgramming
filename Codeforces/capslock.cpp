#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  bool y = true;
  cin >> s;
  for (int i = 1; i < s.length(); i++){
    if (!isupper(s[i])){
      y = false;
      break;
    }
  }
  if (y){
    if (isupper(s[0])){
      s[0] = tolower(s[0]);
    }else {
      s[0] = toupper(s[0]);
    }
    for (int a = 1; a < s.length(); a++){
      s[a] = tolower(s[a]);
    }
  }
  cout << s;
}
