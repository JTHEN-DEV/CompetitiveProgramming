#include <bits/stdc++.h>

using namespace std;

vector<int> n = {2, 4, 3, 7, 4, 5};

vector<vector<int>> d(10000, vector<int>());

vector<int> dp(vector<int> n, int prev){    
    if (!(d[i].empty())){
        return d[i];
    }
    vector<int> o;
    for (int a = i+1; a < n.size(); a++){
        vector<int> nv(n+a, n.end());
        dp(nv, n[0]);
    }
}

int main(){
    vector<int> out = dp(n, 0);
}
