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
    int t,p;
    cin>>t;
    int arr[12] = {1,2,4,8,16,32,64,128,256,512,1024,2048};
    int item[12] = {0};
    while(t--){
        cin>>p;
        for(int i=11 ; i>=0 ; --i){
            item[i] = p/arr[i];
            p = p - item[i]*arr[i];
        }
        int sum = 0;
        for(int i=0 ; i<12 ; ++i) sum+=item[i];
        cout<<sum<<endl;
    }

    return 0;
}

