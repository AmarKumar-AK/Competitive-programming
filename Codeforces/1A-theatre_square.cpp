//1A-Theatre Square
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,m,a;
    cin>>n>>m>>a;
    ll l = ceil((double)n/a);
    ll b = ceil((double)m/a);
    ll ans = l*b;
    cout<<(ll)ans<<endl;
    return 0;
}