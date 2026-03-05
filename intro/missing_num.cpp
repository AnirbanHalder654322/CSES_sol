#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long sum = n*(n+1)/2;
    long long val;

    n--;
    while(n--){
        cin >> val;
        sum -=val;
    }
    cout << sum;
    

}