#include <bits/stdc++.h>

using namespace std;

int main(){
    int i = 1;
    int prev = 1;
    int sum = 0;
    int temp;
    while (i < 4000000){
        if (!(i%2)){
            sum += i;
        }
        temp = i;
        i += prev;
        prev = temp;
    }
    cout << sum  ;
}
