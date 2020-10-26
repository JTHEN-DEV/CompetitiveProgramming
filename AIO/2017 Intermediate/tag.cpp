#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("tagin.txt", "r", stdin);
    //freopen("tagout.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    vector<int> r;
    vector<int> b;
    r.push_back(1);
    b.push_back(2);
    while(m--){
        sort(r.begin(), r.end());
        sort(b.begin(), b.end());
        int x, y;
        cin >> x >> y;
        if (binary_search(r.begin(), r.end(), x)){
            r.push_back(y);
        } else {
            b.push_back(y);
        }
    }
    cout << r.size() << " " << b.size();
}
