#include <bits/stdc++.h>

using namespace std;

int main(){
    int sum;
    for (int i = 1; i < 1000; i++ ){
        if (i%5 == 0 || i%3 == 0){
            sum += i;
        }
    }
    cout << sum;
}
