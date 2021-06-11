// 69A- Young Physicist
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int sumX=0,sumY=0,sumZ=0;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        sumX+=x;
        sumY+=y;
        sumZ+=z;
    }
    if(sumX==0 && sumY==0 && sumZ==0) cout<<"YES";
    else cout<<"NO";

    return 0; 
}