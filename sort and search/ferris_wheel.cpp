#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,x;
    cin >> n >> x;
    vector<int> w(n);
    for(int i=0;i<n;i++){
        cin >> w[i];
    }
    sort(w.begin(),w.end());
    int low{0};
    int high{n-1};
    int c{0};
    while(low<=high){
        if(w[low]+w[high]<=x){
            low+=1;
            high-=1;
            
        }else{
            high-=1;
        }
        c++;
        
    }
    cout << c;
     
}