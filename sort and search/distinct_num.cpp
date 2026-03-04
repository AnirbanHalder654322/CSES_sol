#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    set<uint64_t> s;
    uint64_t v;
    while(n--){
        cin >> v;
        s.insert(v);
    }
    cout << s.size();
}