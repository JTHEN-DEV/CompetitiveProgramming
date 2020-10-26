#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr = {1, 2, 4};
    sort(arr.begin(), arr.end());
    for (int i = 2; i < arr.size(); i++){
        if (arr[i] - arr[i-1] == arr[i-1] - arr[i-2]){
            continue;
        } else {
            return false;
        }
    }
    return true;
}
