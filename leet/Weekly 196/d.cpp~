#include <bits/stdc++.h>

using namespace std;

int main(){
    string num = "4321";
    int k = 4;
    bool y = false;
    int done = 0;
    int max = 10;
    int maxi;
    while (k != 0){
        if (!y){
            max = 10;
            for (int i = done; i < num.length(); i++){
                if (num[i]-'0' < max){
                    max = num[i]-'0';
                    maxi = i;
                }
            }
            y = true;
        }
        if (maxi == done){
            done++;
            y = false;
        } else {
            char t1, t2;
            t1 = num[maxi];
            t2 = num[maxi-1];
            num[maxi] = t2;
            num[maxi-1] = t1;
        }
        maxi--;
        k--;
    }
    cout << num;
}
