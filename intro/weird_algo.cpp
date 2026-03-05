#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    if(n==1){
        cout << 1;
        return 0;
    }
    do{
        cout << n << " ";
        if(n&1){
            n=n*3+1;
        }else{
            n=n/2;
        }
    }while(n!=1);
    cout << 1;
}