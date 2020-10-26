#include <bits/stdc++.h>

using namespace std;

int main(){
  freopen("rpsin.txt", "r", stdin);
  freopen("rpsout.txt", "w", stdout);
  int ra, pa, sa, rb, pb, sb, n, t, score;
  score = 0;
  cin >> n;
  cin >> ra >> pa >> sa >> rb >> pb >> sb;
  t = min(rb, sa);
  rb -= t;
  sa -= t;
  score += t;
  t = min(pb, ra);
  pb -= t;
  ra -= t;
  score += t;
  t = min(sb, pa);
  sb -= t;
  pa -= t;
  score += t;
  t = min(rb, ra);
  rb -= t;
  ra -= t;
  t = min(sb, sa);
  sb -= t;
  sa -= t;
  t = min(pb, pa);
  pb -= t;
  pa -= t;
  score -= (ra + pa + sa);
  cout << score;
}
