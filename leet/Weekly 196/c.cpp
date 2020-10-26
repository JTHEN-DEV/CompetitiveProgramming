#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<vector<int>> mat = {{1, 1, 1, 1, 1, 1}};
    int s = 0;
    bool ye = true;
    if (mat.size() != 1){
        for (int y = 0; y < mat.size(); y++){
            for (int x = 0; x < mat[0].size(); x++){
                for (int a = y; a < mat.size(); a++){
                    for (int b = x; b < mat[0].size(); b++){
                        ye = true;
                        for (int c = y; c < a+1; c++){
                            for (int d = x; d < b+1; d++){
                                if (mat[c][d] != 1){
                                    ye = false;
                                    break;
                                }
                            }
                            if (!ye){
                                break;
                            }
                        }
                        s += ye;
                    }
                }
            }
        }
    } else {
        int p = 0;
        for (int i = 0; i < mat[0].size(); i++){
            if (mat[0][i] == 1){
                p++;
            } else {
                s += (pow(p,2)+p)/2;
                p = 0;
            }
        }
        if (mat[0][mat[0].size()-1] == 1){
            s += (pow(p,2)+p)/2;
        }
    }
    return s;
}
