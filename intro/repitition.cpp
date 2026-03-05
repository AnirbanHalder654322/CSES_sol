#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    long count{1};
    long cmax{1};
    for(int i=0;i<s.length()-1;i++){
       if(s[i] == s[i+1]){
        count+=1;
       }else{
        count =1;
       } 
       cmax = max(cmax,count);
    }
    cout << cmax;
}