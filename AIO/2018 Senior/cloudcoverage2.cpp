#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("cloudin.txt", "r", stdin);
    freopen("cloudout.txt", "w", stdout);
    int n, k;
    cin >> n >> k;
    int sum = 0;
    int a;
    n--;
    n -= k;
    deque<int> d;
    while (k--){
        cin >> a;
        d.push_back(a);
        sum += a;
    }
    int mi = sum;
    while (n>0){
        sum -= d.front();
        d.pop_front();
        cin >> a;
        d.push_back(a);
        sum += a;
        mi = min(mi, sum);
        n--;
    }
    cout << mi << endl;
}
