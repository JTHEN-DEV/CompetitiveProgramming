#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, l;
    int p[n];
    vector<int> pos;
    cin >> n >> l;
    for (int i = 0; i < n; i++){
        cin >> p[i];
    }
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        pos.push_back(p[a-1]);
    }
    int s, e, d;
    if (pos[1] > pos[0]){
        s = 1;
        e = pos[0] + (pos[1]-pos[0])/2;
    } else {
        e = l;
        s = pos[0] - (pos[0]-pos[1])/2;
    }
    d = abs(pos[0]-pos[1]);
    for (int i = 0; i < n; i++){
        
    }
}
