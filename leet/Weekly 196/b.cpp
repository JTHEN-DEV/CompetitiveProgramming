#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    vector<int> left;
    vector<int> right;
    int max = 0;
    for (int i = 0; i < left.size(); i++){
        if (left[i] > max){
            max = left[i];
        }
    }
    for (int ai = 0; ai < right.size(); ai++){
        if (n - right[ai] > max){
            max = n - right[ai];
        }
    }
    return max;
}
