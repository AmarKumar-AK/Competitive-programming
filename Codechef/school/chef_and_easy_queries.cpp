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
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll *a = new long long [n];
        for(int i=0 ; i<n ; ++i){
            cin>>a[i];
        }
        ll day=1;
        int i=0;
        while(a[i]>=k){
            if(i != n-1){
                i++;
                a[i] = a[i] + a[i-1] -k;
                day++;
            }else{
                day = day + a[i]/k;
                a[i] = a[i] % k;
            }
        }
        cout<<day<<endl;
        
        delete[] a;
    }

    return 0;
}