#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        float discrimnant = sqrt(1+8*n);
        int ans = (-1 + discrimnant)/2;
        cout<<ans<<endl;
    }
    return 0;
}