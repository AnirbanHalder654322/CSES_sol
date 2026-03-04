#include <bits/stdc++.h>

using namespace std;


int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> ds(n),apt(m);
    for(int i=0;i<n;i++){
        cin >> ds[i];
    }
    for(int j=0;j<m;j++){
        cin >> apt[j];
    }
    sort(ds.begin(),ds.end());

    sort(apt.begin(),apt.end());
    int c{0};
    int a{0};   
    int b{0};

    while(a<n && b<m){
        if(ds[a]-apt[b]>k){
            b+=1;
        }else if(apt[b]-ds[a]>k){
            a+=1;
        }else{
            a+=1;
            b+=1;
            c+=1;
        }
    }

    
    cout << c;
}