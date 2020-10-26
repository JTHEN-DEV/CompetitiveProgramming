#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, a;
    cin >> n >> k;
    int ar[k];
    for (int i = 0; i < k; i++){
        cin >> a;
        ar[i] = a;
    }
    int s = 0;
    int t = 1000000;
    sort(ar, ar+(sizeof(ar)/sizeof(ar[0])));
    for (int c = n-1; c < k; c++){
        s = ar[c] - ar[c-(n-1)];
        if (t > s){
            t = s;
        }
    }
    cout << t;
}
