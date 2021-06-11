#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t,n;
    cin>>t;
    while(t--){
        int coin5=0,coin10=0;
        cin>>n;
        int coin;
        bool flag=0;
        for(int i=0 ; i<n ; ++i){
            cin>>coin;
            if(coin==5)coin5++;
            else if(coin==10){
                coin10++;
                if(coin5>0)coin5--;
                else flag=1;
            }
            else{
                if(coin10>0)coin10--;
                else if(coin5>1)coin5-=2;
                else flag=1;
            }
        }
        if(flag)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}