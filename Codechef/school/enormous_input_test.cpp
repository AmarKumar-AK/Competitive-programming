#include<bits/stdc++.h>
using namespace std;

#define F first 
#define S second 
#define PB push_back
#define MOD 1e9 + 7 
#define REP(i,a,b) for(int i = a ; i < b ; ++i)
#define REPL(i,a,b) for(int i = a ; i <= b ; ++i)
#define REPR(i,a,b) for(int i = a ; i >= b ; --i)
#define P1(a) cout<<a<<"\n";
#define P2(a) cout<<a<<" ";
#define ENTER cout<<endl;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int, int> pii;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,k;
    cin>>n>>k;
    int count=0,data;
    ll sum;
    for(int i=0 ; i<n ; ++i){
        cin>>data;
        if(data%k==0){
            count++;
        }
    }
    cout<<count;

    return 0;
}
