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
        int n,k;
        cin>>n>>k;
        int pos[n];
        bool flag=0;
        int num_step[n];
        for(int i=0 ; i<n ; ++i){
            cin>>pos[i];
            if(k%pos[i]==0 && pos[i]<k){
                num_step[i]=(k-pos[i])/pos[i];
                // cout<<i<<" num_step : "<<num_step[i]<<endl;
                flag=1;
            }else num_step[i]=1000000000;
        }
        // cout<<" num_step : "<<num_step[0]<<endl;
        if(flag){
            ll index = distance(num_step,min_element(num_step,num_step+n));
            // cout<<"index : "<<index<<endl;
            cout<<pos[index]<<endl;
        }else cout<<"-1"<<endl;
        
    }
    // int a[5]={7,9,5,4,10};
    // cout<<distance(a,min_element(a,a+5));

    return 0;
}