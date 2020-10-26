#include <bits/stdc++.h>

using namespace std;

int main(){
  int sum = 0;
  vector<int> nums {1, 1, 1, 1};
  for (int i = 0; i < nums.size(); i++){
    for (int a = i; a < nums.size(); a++){
      if (nums[a] == nums[i]){
        sum++;
      }
    }
  }
  return sum - nums.size();
}
