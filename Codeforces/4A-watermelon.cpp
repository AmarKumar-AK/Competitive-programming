// 4A-watermelon
#include<bits/stdc++.h>
using namespace std;
int main(){
    int w;
    cin>>w;
    if(w>=4){
        if((w&1)==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}