#include <bits/stdc++.h>

using namespace std;

// NEED TO FIX WHEN ALL TILES ARE THE SAME HEIGHT

int main(){
    freopen("janitorin.txt", "r", stdin);
    freopen("janitorout.txt", "w", stdout);
    int y, x, r;
    cin >> y >> x >> r;
    int ar[y][x];
    for (int a = 0; a < y; a++){
        for (int b = 0; b < x; b++){
            cin >> ar[a][b];
        }
    }
    int re[r][3];
    for (int z = 0; z < r; z++){
        cin >> re[z][0];
        cin >> re[z][1];
        cin >> re[z][2];
    }
    int bckt = 0;
    for (int c = 0; c < y; c++){
        for (int d = 0; d < x; d++){
            int s = 0;
            int m = 0;
            bool y = true;
            if (c != 0){
                if (ar[c-1][d] < ar[c][d]){
                    s++;
                } else {
                    y = false;
                }
                m++;
            }
            if (c != y-1 && y){
                if (ar[c+1][d] < ar[c][d]){
                    s++;
                } else {
                    y = false;
                }
                m++;
            }
            if (d != 0 && y){
                if (ar[c][d-1] < ar[c][d]){
                    s++;
                } else {
                    y = false;
                }
                m++;
            }
            if (d != x-1 && y){
                if (ar[c][d+1] < ar[c][d]){
                    s++;
                } else {
                    y = false;
                }
                m++;
      }
            if (m == s){
                bckt++;
            }
        }
    }
    cout << bckt << endl;
    int ind = 0;
    while(ind < r){
    ar[re[ind][0]-1][re[ind][1]-1] = re[ind][2];
    bckt = 0;
    for (int c = 0; c < y; c++){
        for (int d = 0; d < x; d++){
            int s = 0;
            int m = 0;
            bool y = true;
            if (c != 0){
                if (ar[c-1][d] < ar[c][d]){
                    s++;
                } else {
                    y = false;
                }
                m++;
            }
            if (c != y-1 && y){
                if (ar[c+1][d] < ar[c][d]){
                    s++;
                } else {
                    y = false;
                }
                m++;
            }
            if (d != 0 && y){
                if (ar[c][d-1] < ar[c][d]){
                    s++;
                } else {
                    y = false;
                }
                m++;
            }
            if (d != x-1 && y){
                if (ar[c][d+1] < ar[c][d]){
                    s++;
                } else {
                    y = false;
                }
                m++;
      }
            if (m == s){
                bckt++;
            }
        }
    }
    ind++;
    cout << bckt << endl;
    }
}
