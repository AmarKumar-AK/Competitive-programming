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
    string s;
    int sum;
    while(t--){
        cin>>s;
        int size=s.size();
        sum = s[0] - '0' + s[size-1] - '0';
        cout<<sum<<endl;
    }

    return 0;
}