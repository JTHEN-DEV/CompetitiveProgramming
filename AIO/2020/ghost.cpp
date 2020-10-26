#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<double> d;
    vector<int> x;
    vector<int> s;
    int n, t;
    cin >> n >> t;
    int a, b;
    while (n--){
        cin >> a >> b;
        x.push_back(a);
        s.push_back(b);
    }
    for (int i = 1; i < x.size(); i++){
        d.push_back((double)(x[i]-x[i-1])/(s[i]-s[i-1]));
    }
}
