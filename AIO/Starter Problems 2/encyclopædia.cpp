#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("encyin.txt", "r", stdin);
    freopen("encyout.txt", "w", stdout);
    int n, q;
    cin >> n >> q;
    int ar[n];
    for (int i = 0; i < n; i++){
        cin >> ar[i];
    }
    while (q--){
        int a;
        cin >> a;
        cout << ar[a-1] << endl;
    }
}
