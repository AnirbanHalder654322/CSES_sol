#include <bits/stdc++.h>

using namespace std;



int main(){
    int n;
    cin >> n;
    int sum; 
    cin >> sum;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {   
        cin >> a[i];
    }
    int diff {0};
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        if(a[i]<sum){        
        diff = sum - a[i];
        if(m.find(diff) != m.end()){
            cout << m[diff]+1 << " "<< i+1;
            return 0;
        }

        m.insert({a[i],i});
    }
    }
    cout << "IMPOSSIBLE";
}