// 158A-Next Round
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0 ; i<n ; ++i){
        cin>>v[i];
    }
    int find = v[k-1];
    int cnt=0;
    if(find==0){
        for(int i=0 ; i<k ; ++i){
            if(v[i]>0) cnt++;
            if(v[i]==0) break;
        }
        cout<<cnt<<endl;
        return 0;
    }
    int store = k;
    for(int i=k ; i<n ; ++i){
        if(v[i]==find) store++;
    }
    cout<<store<<endl;
    return 0;
}