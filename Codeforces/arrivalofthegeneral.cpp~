#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++){
        cin >> a;
        ar[i] = a;
    }
    int max = 0;
    int maxi;
    for (int b = 0; b < n; b++){
        if (max < ar[b]){
            max = ar[b];
            maxi = b;
        }
    }
    int min = 1000;
    int mini;
    for (int c = n-1; c > -1; c--){
        if (min > ar[c]){
            min = ar[c];
            mini = c;
        }
    }
    cout << (n-mini-1) + maxi - (mini < maxi);
}
