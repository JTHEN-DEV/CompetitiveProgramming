#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long int n){
    long long int factor = 3;
    if (n%2 == 0){
        return false;
    }
    while (true){
        if (factor > n/3){
            return true;
        } else {
            if (n%factor == 0){
                return false;
            } else {
                factor += 2;
            }
        }
    }
}

int main(){
    int n = 3;
    int a = 1;
    while (a != 10001){
        if (isPrime(n)){
            a++;
        }
        n += 2;
    }
    cout << n - 2 << endl;
}
