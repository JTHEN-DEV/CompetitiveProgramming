#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("ghostin.txt", "r", stdin);
    freopen("ghostout.txt", "w", stdout);
    int n, k;
    cin >> n >> k;
    int ma = 0;
    vector<int> t;
    int a, b;
    while (n--){
        cin >> a >> b;
        t.push_back(a);
    }
    sort(t.begin(), t.end());
    for (int a = 1; a <= t.back(); a++){
        int count = 0;
        for (int i : t){
            if(i == a) count++;
        }
        ma = max(count, ma);
    }
    cout << ma << endl;
}
