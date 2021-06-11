#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 
using boost::multiprecision::cpp_int;
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
        cpp_int a[n];
        REP(i,0,n){
            cin>>a[i];
        }
        // sort(a,a+n,greater<int>());
        sort(a,a+n);
        reverse(a,a+n);
        cpp_int sump=0,sumq=0;
        sump+=a[0];
        for(int i=3 ; i<n ; i=i+2) sump += a[i];
        if(n>=2) sumq+=a[1];
        for(int i=2 ; i<n ; i=i+2){
            sumq += a[i];
        }
        // cout<<sump<<" "<<sumq<<endl;
        if(sump>sumq) cout<<"first"<<endl;
        else if(sump<sumq) cout<<"second"<<endl;
        else cout<<"draw"<<endl;

    }

    return 0;
}