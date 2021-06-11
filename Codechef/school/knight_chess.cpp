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
    int t,n;
    
    cin>>t;
    while(t--){
        cin>>n;
        ll knightx[n],knighty[n];
        for(int i=0 ; i<n ; ++i){
            ll a,b;
            cin>>a>>b;
            knightx[i] = a;
            knighty[i] = b;
        }
        ll kingx,kingy;
        cin>>kingx>>kingy;
        ll king1[9] = {0, 0, 0, -1, -1, -1, 1, 1, 1};
        ll king2[9] = {0, 1, -1, 0, 1, -1, 0, 1, -1};
        for(int i=0 ; i<9 ; ++i){
            king1[i] = kingx + king1[i];
            king2[i] = kingy + king2[i];
        }
        
        int knight1[] = {2, 1, -2, 1, -2, -1, 2, -1};
        int knight2[] = {1, 2, 1, -2, -1, -2, -1, 2};
        int arr[9]={0};
        for(int i=0 ; i<n ; ++i){
            for(int j=0 ; j<8 ; ++j){
                for(int k=0 ; k<9 ; ++k){
                    if(arr[k]==0){
                        if(knightx[i]+knight1[j] == king1[k] && knighty[i]+knight2[j] == king2[k]){
                            arr[k]=1;
                        }
                    }
                }
            }
        }
        bool flag=0;
        for(int i=0 ; i<9 ; ++i){
            if(arr[i]==0){flag=1;break;}
        }
        if(flag)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}