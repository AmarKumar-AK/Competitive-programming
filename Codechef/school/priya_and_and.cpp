#include<bits/stdc++.h>
// #include <boost/multiprecision/cpp_int.hpp> 
// using boost::multiprecision::cpp_int;
using namespace std;

#define F first 
#define S second 
#define PB push_back
#define MOD 1e9 + 7 
#define REP(i,a,b) for(int i = a ; i < b ; ++i)
#define REPL(i,a,b) for(int i = a ; i <= b ; ++i)
#define REPR(i,a,b) for(int i = a ; i >= b ; --i)
#define S1(a) scanf("%d",&a);
#define P1(a) printf("%d\n",a);
#define P2(a) printf("%d ",a);
#define FAST ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define ENTER cout<<endl;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int, int> pii;
int main(){
    FAST;
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        // vector<tuple<int,int,int>>v;
        REP(i,0,n){
            cin>>a[i];
        }
        ll count=0;
        REP(i,0,n){
            REP(j,i+1,n){
                int anding = a[i]&a[j];
                if(a[i]==anding){
                    count++;
                }
                // v.PB({a[i],a[j],anding});
            }
        }
        cout<<count<<endl;
    }

    return 0;
}