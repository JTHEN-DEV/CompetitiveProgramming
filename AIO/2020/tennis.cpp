#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("tennisin.txt", "r", stdin);
    freopen("tennisout.txt", "w", stdout);
    int b, n;
    cin >> b >> n;
    int q[b];
    int ff = b;
    int mi = INT_MAX;
    int x;
    for (int i = 0; i < b; i++){
        cin >> x;
        q[i] = x;
        mi = min(mi, x);
    }
    int a = 0;
    int r = 0;
    bool y = true;
    if (n - mi*b >= 0){
        n -= mi*b;
        r = mi;
    } else {
        while (n - b >= 0 && a < mi){
            n -= b;
            r++;
            a++;
        }
        y = false;
    }
    r++;
    for (int i = 0; i < ff; i++){
            if (q[i] < r && q[i] != 0){
                b--;
            q[i] = 0;
            }
        }
    if (n == 0){
        cout << ff << endl;
        return 0;
    }
    while (n - b >= 0 && y){
        if (n - b >= 0){
            n -= b;
        } else {
            break;
        }
        for (int i = 0; i < ff; i++){
            if (q[i] < r && q[i] != 0){
                b--;
                q[i] = 0;
            }
        }
    }
    for (int asd = 0; asd < ff; asd++){
        if (q[asd] != 0){
            n--;
        }
        if (n == 0){
            cout << asd + 1 << endl; 
            return 0;
        }
    }
}
