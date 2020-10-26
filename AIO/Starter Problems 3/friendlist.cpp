#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("listin.txt", "r", stdin);
    freopen("listout.txt", "w", stdout);
    int n;
    cin >> n;
    map<int, int> f;
    while (n--){
        int a, b;
        cin >> a >> b;
        f[b]++;
        f[a]++;
    }
    string s = "";
    int max = 0;
    for (pair<int, int> x : f){
        if (x.second > max){
            s = to_string(x.first) + "\n";
            max = x.second;
        } else if (x.second == max){
            s += to_string(x.first) + "\n";
        }
    }
    cout << s;
}
