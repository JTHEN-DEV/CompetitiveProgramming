#include <bits/stdc++.h>

using namespace std;

bool divisible(int ar[], int k, int n){
        for (int i = 0; i < n; i++){
            if (ar[i]%k != 0){
                return false;
            }
        }
        return true;
}

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n, k;
        cin >> n >> k;
        int ar[n];
        for (int a = 0; a < n; a++){
            cin >> ar[a]; 
        }
        int x = 0;
        int m = 0;
        for (int b : ar){
            m = max(m, b%k);
            if (b%k != 0){
                x++;
            }
        }
        cout << x+m << endl;
    }
}
