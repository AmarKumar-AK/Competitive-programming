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
        string str;
        cin>>str;
        int n = str.size();
        int freq_firstHalf[26]={0};
        int freq_secondHalf[26]={0};
        if(n&1){
            // first half
            for(int i=0 ; i<n/2 ; ++i) freq_firstHalf[str[i]-'a']++;
            // second half
            for(int i=n/2+1 ; i<n ; ++i) freq_secondHalf[str[i]-'a']++;
            
        }else{
            // first half
            for(int i=0 ; i<n/2 ; ++i) freq_firstHalf[str[i]-'a']++;
            // second half
            for(int i=n/2 ; i<n ; ++i) freq_secondHalf[str[i]-'a']++;
            
        }
        bool flag=0;
        for(int i=0 ; i<26 ; ++i){
            if(freq_firstHalf[i] != freq_secondHalf[i]){
                flag=1;
                break;
            }
        }
        if(flag&1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
