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
        int n;
        cin>>n;
        bool flag=0;
        for(int i=2 ; i<=n/2 ; ++i){
            if(n%i==0){
                flag=1;
                break;
            }else{
                flag=0;
            }
        }
        if(n==0 || n==1) flag=1;
        if(flag){
            cout<<"no"<<endl;
        }else{
            cout<<"yes"<<endl;
        }
    }

    return 0;
}