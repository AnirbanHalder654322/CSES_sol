#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    long long prev;
    cin >> n;
    cin >> prev;
    long long cur{prev};
    n--;
    long long moves{0};
    long long diff{0};
    while(n--){
        cin >> cur;
        if(cur<prev){
            diff = (prev-cur); 
            moves += diff;
             
        }else{
            prev = cur;
        }
        
    }
    cout << moves;
}