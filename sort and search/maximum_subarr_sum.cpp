#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    for(auto i=0;i<n;++i){
        cin >> a[i];
    }
    
    long long ms{LLONG_MIN};
    long long sum{0};
    for(auto i=0;i<n;++i){
        sum = max(a[i], sum + a[i]);        
        ms = max(ms,sum);
    }
    cout << ms;    
}