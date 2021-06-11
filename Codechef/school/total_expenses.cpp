#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        double quantity,price;
        cin>>quantity>>price;
        double amount = 1.0*quantity*price;
        if(quantity>1000){
            amount=amount*0.9;
        }
        cout<<fixed<<setprecision(6)<<amount<<endl;
    }
    return 0;
}