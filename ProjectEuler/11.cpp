#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("11in.txt", "r", stdin);
    int ar[20][20];
    for (int y = 0; y < 20; y++){
        for (int x = 0; x < 20; x++){
            cin >> ar[y][x];
        }
    }
    cout << ar[0][0] << endl;
    long long int p = 0;
    //ROWS and COLUMNS
    for (int a = 0; a < 20; a++){
        for (int b = 3; b < 20; b++){
            if (ar[a][b]*ar[a][b-1]*ar[a][b-2]*ar[a][b-3] > p){
                p = ar[a][b]*ar[a][b-1]*ar[a][b-2]*ar[a][b-3];
                return 0;
            }
            if (ar[b][a]*ar[b-1][a]*ar[b-2][a]*ar[b-3][a] > p){
                p = ar[b][a]*ar[b-1][a]*ar[b-2][a]*ar[b-3][a];
            }
        }
    }

    //DIAGONALS DOWN
    for (int c = 3; c < 20; c++){
        for (int d = 3; d < 20; d++){
            if (ar[c][d]*ar[c-1][d-1]*ar[c-2][d-2]*ar[c-3][d-3] > p){
                p = ar[c][d]*ar[c-1][d-1]*ar[c-2][d-2]*ar[c-3][d-3];
            }
            if (ar[c][d-3]*ar[c-1][d-2]*ar[c-2][d-1]*ar[c-3][d] > p){
                p = ar[c][d]*ar[c-1][d-1]*ar[c-2][d-2]*ar[c-3][d-3];
            }
        }
    }
    cout << p << endl;
    

}
