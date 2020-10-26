#include <bits/stdc++.h>

using namespace std;

int main(){
    //vector<vector<int>> grid = {{2, 1, 1},{1, 1, 0},{0, 1, 1}};
    

    vector<vector<int>> grid = {{2, 1, 0, 2}};
    cout << grid.size() << endl;

    // Get coordinates of rotten + check if possible
    vector<pair<int,int>> c;
    int fresh = 0;
    bool b = false;
    for (int y = 0; y < grid.size(); y++){
        for (int x = 0; x < grid[0].size(); x++){
            if (grid[y][x] == 2){
                pair<int,int> yeet = {y, x};
                c.push_back(yeet);
            } else if (grid[y][x] == 1){
                fresh++;
                int m = 0;
                int e = 0;
                if (x != 0){
                    if (grid[y][x-1] == 0){
                        e++;
                        m++;
                    } else {
                        m++;
                    }
                }
                if (x != grid[0].size()-1){
                    if (grid[y][x+1] == 0){
                        e++;
                        m++;
                    } else {
                        m++;
                    }
                }
                if (y != grid.size()-1){
                    if (grid[y+1][x] == 0){
                        e++;
                        m++;
                    } else {
                        m++;
                    }
                }
                if (y != 0){
                    if (grid[y-1][x] == 0){
                        e++;
                        m++;
                    } else {
                        m++;
                    }
                }
                if (m==e){
                    cout << -1 << endl;
                    return 0;
                }
            }
        }
    }

    if (fresh == 0){
        cout << 0 << endl;
        return 0;
    }
    
    cout << " >> " << c.size() << endl;

    // Get max path
    int max = 0;
    for (int y = 0; y < grid.size(); y++){
        for (int x = 0; x < grid[0].size(); x++){
            if (grid[y][x] == 1){
                int min = 100000;
                for (pair<int,int> yx : c){
                    //cout << (abs(yx.first - y) + abs(yx.second - x)) << endl;
                    if ((abs(yx.first - y) + abs(yx.second - x)) < min) min = (abs(yx.first - y) + abs(yx.second - x));
                }
                if (min > max){
                    max = min;
                }
            }
        }
    }
    cout << max << endl;
}
