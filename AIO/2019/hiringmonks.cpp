#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("hirein.txt", "r", stdin);
    freopen("hireout.txt", "w", stdout);
    vector<int> n;
    vector<int> s;
    vector<int> m;
    int monks, students, masters;
    cin >> monks;
    int a;
    while (monks--){
        cin >> a;
        n.push_back(a);
    }
    cin >> students;
    while (students--){
        cin >> a;
        s.push_back(a);
    }
    cin >> masters;
    while (masters--){
        cin >> a;
        m.push_back(a);
    }
    sort(n.begin(), n.end());
    sort(s.begin(), s.end());
    int t = 0;
    for (int x : n){
        if (t < s.size() && x <= s.back()){
            t++;
        } else {
            break;
        }
    }
    int asd = t;
    sort(m.begin(), m.end());
    for (int i = n.size()-1; i >= asd; i=i){
        if (m.empty()){
            break;
        }
        if (n[i] >= m.back()){
            m.erase(m.end()-1);
            t++;
            i--;
        } else {
            m.erase(m.end()-1);
        }
    }
    cout << t;
}
