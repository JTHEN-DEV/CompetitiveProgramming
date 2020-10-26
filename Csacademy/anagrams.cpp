#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> num;
    vector<map<char,int>> m;
    while (n--){
        map<char,int> words;
        string s;
        cin >> s;
        for (char a : s){
            words[a]++;
        }
        m.push_back(words);
        num.push_back(0);
        cout << m.size() << endl;
        bool y = true;
        for (int i = 0; i < m.size(); i++){
            y = true;
            map<char, int> x = m[i];
            for (pair<char, int> t : x){
                if (words[t.first] == t.second && (words.size() == x.size())){
                    continue;
                } else {
                    y = false;
                    break;
                }
            }
            if(y){
                num[i]++;
                break;
            }
        }
        if (!y){
            m.push_back(words);
            num.push_back(1);
        }
    }
    sort(num.begin(), num.end(), greater<int>());
    cout << num[0] << endl;
}
