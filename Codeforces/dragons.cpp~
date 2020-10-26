#include <bits/stdc++.h>

using namespace std;

int main(){
    int s,n,a,b;
    pair<int, int> c;
    cin >> s >> n;
    vector<pair<int, int>> d;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        c.first = a;
        c.second = b;
        d.push_back(c);
    }
    sort(d.begin(), d.end());
    for (auto f : d){
        if (s > f.first){
            s += f.second;
        } else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
