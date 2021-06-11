#include<bits/stdc++.h>
using namespace std;
int main(){
    // string x;
    // cin>>x;
    // int sum1=0;
    // for(int i=0 ; i<x.size() ; ++i){
    //     sum1+=int(x[i]-48);
    // }
    // cout<<sum1<<endl;

    int t,n;
    string a,b;
    cin>>t;
    while(t--){
        cin>>n;
        int chef=0,monty=0;
        for(int i=0 ; i<n ; ++i){
            cin>>a>>b;
            int sum1 = 0, sum2 = 0;
            for(int j=0 ; j<a.size() ; ++j){
                sum1+=int(a[j]-48);
            }
            for(int k=0 ; k<b.size() ; ++k){
                sum2+=int(b[k]-48);
            }
            if(sum1 == sum2){
                chef++;
                monty++;
            }else if(sum1>sum2){
                chef++;
            }else if(sum1<sum2){
                monty++;
            }
        }
        if(chef>monty){
            cout<<"0"<<" "<<chef<<endl;
        }else if(chef<monty){
            cout<<"1"<<" "<<monty<<endl;
        }else if(chef == monty){
            cout<<"2"<<" "<<chef<<endl;
        }

    }

    return 0;
}