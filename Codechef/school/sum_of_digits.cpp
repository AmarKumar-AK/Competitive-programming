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
    int t;
    cin>>t;
    while(t--){
        int data;
        cin>>data;
        int sum=0;
        while(data!=0){
            sum+=data%10;
            data/=10;
        }
        cout<<sum<<"\n";
    }

    return 0;
}

