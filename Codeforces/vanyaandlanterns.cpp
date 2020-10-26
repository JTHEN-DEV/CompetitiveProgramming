#include <bits/stdc++.h>

using namespace std;

int main(){
    int l, n, a;
    cin >> n;
    cin >> l;
    int ar[n+2];
    for (int i = 0; i < n; i++){
        cin >> a;
        ar[i] = a;
    }
    ar[n] = 0;
    ar[n+1] = l;
    sort(ar, ar + n+2);
    double ma = max(ar[1]-ar[0], ar[n+1]-ar[n]);
    for (int a = 2; a < n+1; a++){
        if ((double)(((double)(ar[a] - ar[a-1]))/2) > ma){
            ma = (double)(((double)(ar[a] - ar[a-1]))/2);
        }
    }
    cout << setprecision(100) << ma << endl;
}
