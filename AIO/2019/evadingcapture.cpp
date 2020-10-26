#include <bits/stdc++.h>

using namespace std;

map<int, int> dp;
vector<int> ct;
vector<vector<int>> c;
vector<bool> bc(1000000, false);



void cities(vector<vector<int>> c, int x, int k, bool e){
    if (k == 0){
        if (find(ct.begin(), ct.end(), x) == ct.end()){
            ct.push_back(x);
    }
        return;
    }
    if (bc[x]){
        return;
    }
    for (int i : c[x]){
        cities(c, i, k-1, e);
    }
    bc[x] = true;
    return;
}

int main(){
    freopen("evadingin.txt", "r", stdin);
    freopen("evadingout.txt", "w", stdout);
    int n, e, x, k;
    cin >> n >> e >> x >> k;
    x--;
    for (int i = 0; i < n; i++){
        c.push_back(vector<int>());
    }
    int a, b;
    while (e--){
        cin >> a >> b;
        c[a-1].push_back(b-1);
        c[b-1].push_back(a-1);
    }
    cities(c,x,k, (k%2));
    cout << ct.size() << endl;
}
