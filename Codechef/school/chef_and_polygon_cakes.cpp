#include<bits/stdc++.h>
using namespace std;

#define F first 
#define S second 
#define PB push_back
#define MOD 1e9 + 7 
#define REP(i,a,b) for(int i = a ; i < b ; ++i)
#define REPL(i,a,b) for(int i = a ; i <= b ; ++i)
#define REPR(i,a,b) for(int i = a ; i >= b ; --i)
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int, int> pii;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t,n,a,k;
    cin>>t;
    while(t--){
        cin>>n>>a>>k;
        
        ll total_angle = (180 * n) - 360;
        // formula sum = (n/2)(2a + (n-1)d)
        ll cd_num = 2* (total_angle - (a*n));
        ll cd_den = n*(n-1);
        ll kth_num = a*cd_den + (k-1)*cd_num;
        ll kth_den = cd_den;
        ll gcd = __gcd(kth_num,kth_den);
        kth_num = kth_num/gcd;
        kth_den = kth_den/gcd;
        cout<<kth_num<<" "<<kth_den<<endl;
        
    }

    return 0;
}