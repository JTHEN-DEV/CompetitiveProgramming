#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("cloudin.txt", "r", stdin);
 //freopen("cloudout.txt", "w", stdout);
    int n, k, s, t, a;
    cin >> n >> k;
    s = 0;
    t = -1;
    int ar[n-1];
    for (int i = 0; i < n-1; i++){
        cin >> a;
        ar[i] = a;
    }
    for (int c = k-1; c < n-1; c++){
        s = 0;
        for (int b = 0; b <k; b++){
            s += ar[b+(c-k+1)];
        }
        if (t == -1){
            t = s;
        }else if (s < t){
            t = s;
        }
    }
    cout << t;

}
