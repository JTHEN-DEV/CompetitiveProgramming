#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> m >> n;
    char ar[m][n];
    for (int x = 0; x < m; x++){
        if (!(x%2)){
            for (int y = 0; y < n; y++){
                ar[x][y] = '#';
            }
        } else if ((x-1)%4 == 0){
            for (int a = 0; a < n-1; a++){
                ar[x][a] = '.';
            }
            ar[x][n-1] = '#';
        } else {
            for (int b = 1; b < n; b++){
                ar[x][b] = '.';
            }
            ar[x][0] = '#';
        }
        
    }
    for (int c = 0; c < m; c++){
        for (char z : ar[c]){
            cout << z;
        }
        cout << endl;
    }
}
