#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("lscin.txt", "r", stdin);
    freopen("lscout.txt", "w", stdout);
    int ns, nh, l;
    cin >> ns >> nh >> l;
    int s[ns];
    for (int i = 0; i < ns; i++){
        cin >> s[i];
    }
    int h[nh];
    for (int i = 0; i < nh; i++){
        cin >> h[i];
    }
    int p[nh];
    for (int i = 0; i < nh; i++){
        cin >> p[i];
    }
    long long int r = 1;
    int t[nh];
    while (r != 10000000){
     for (int i = 0; i < nh; i++){
            int n = 0;
            for (int a : s){
                if (a >= h[i]-r && a <= h[i]+r){
                    n++;
                }
            }
            t[i] = n;
        }
        sort(t, t+nh);
        bool same = true;
        for (int a = 0; a < nh; a++){
            if (t[a] != p[a]){
                same = false;
                break;
            }
        }
        if (same){
            cout << r << endl;
            return 0;
        }
        r++;
    }
    cout << -1 << endl;
}
