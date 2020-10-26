#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for (int tc = 1; tc < t+1; tc++){
        int n, p;
        cin >> n >> p;
        int ar[n];
        for (int i = 0; i < n; i++){
            cin >> ar[i];
        }
        sort(ar, ar+n);
        int mi = 10000;
        for (int a = p-1; a < n; a++){
            int b = p;
            int s = 0;
            while (b--){
                s += ar[a] - ar[a-b];
            }
            //cout << s << endl;
            mi = min(s, mi);
        }
        cout << "Case #" << tc << ": " << mi << endl;
    }
}
