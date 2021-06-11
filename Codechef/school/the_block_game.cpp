#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string copy_s=s;
        reverse(copy_s.begin(),copy_s.end());
        if(s==copy_s){
            cout<<"wins"<<endl;
        }else{
            cout<<"losses"<<endl;
        }
    }
    return 0;
}