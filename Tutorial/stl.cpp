#include <bits/stdc++.h>

using namespace std;


bool f(int x, int y){
        return x > y;
}

void vectorDemo(){
    // VECTORS
    vector<int> A = {11, 2, 3, 14};
    cout << A[1] << endl; // ACCESS
    sort(A.begin(), A.end()); // SORT
    
    // 2, 3, 11, 14

    bool present = binary_search(A.begin(), A.end(), 3); // Chec  k for item present

    A.push_back(100); // Append to vector

    // 2, 3, 11, 14, 100
    
    A.push_back(100);
    A.push_back(123);

    // 2, 3, 11, 14, 100, 100, 123
    
    vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100); // Get first element that is >= to 100
    vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100); // Get first element that is > 100

    cout << *it << " " << *it2 << endl; // Output iterators i.e. indices
    
    
    sort(A.begin(), A.end(), f); // Reverse sort

    for (auto x: A){ // If using auto &x, any changes made to x in loop e.g. x++, will be made to the array
        cout << x << " ";
    } 
    cout << endl;
}

void setDemo(){
    // SETS
    set<int> S; // sets keep ascending order even when inserting items; NOTE: use multiset to allow duplicate items
    S.insert(1); // insert number
    S.insert(2); // insert another number
    S.insert(-10); // ditto
    S.insert(-1); // ditto
    
    S.insert(777);
    S.erase(777); // erase item with value 777

    for (auto x : S){ // print all contents
        cout << x << " ";
    }
    cout << endl;

    auto it = S.find(-1); // get position of -1; if not present, it = S.end()
    if (it == S.end()){
        cout << "Not present" << endl;
    } else {
        cout << "Present" << endl;
        cout << *it << endl;
    }

    auto it2 = S.lower_bound(-1); // iterator to >= -1
    auto it3 = S.upper_bound(0); // iterator to > 0
    cout << *it2 << " " << *it3 << endl;
    auto it4 = S.upper_bound(2);
    if (it4 == S.end()){
        cout << "Item not found" << endl;
    }
}

void mapDemo(){
    map<int, int> A;
    A[1] = 100;
    A[2] = -1;
    A[3] = 200;
    A[4] = 30;
    A[100000232] = 1;

    auto it = A.find(1); // find element based on key
    cout << it->second << endl;
    
    A.erase(4); // remove element based on key

    map<char, int> cnt;
    string x = "joel then";
    for (char c: x){
        cnt[c]++;
    }

    cout << cnt['e'] << " " << cnt['z'] << endl;
}

void pairDemo(){
    pair<int, int> A = {2, 3};
    cout << A.first << " " << A.second << endl; // output first and second item respectively
}

int main(){
    //C++ STL
    
    setDemo();
    
}
