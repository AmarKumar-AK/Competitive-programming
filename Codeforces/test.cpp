// 25A - IQ test
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    int inde=0;
    int indo=0;
    int sum=0;
    for(int i=0 ; i<n ; ++i){
        cin>>v[i];
        sum += v[i]%2;
        if(v[i]&1)indo=i;
        else inde=i;
    }
    if(sum==1)cout<<indo+1;
    else cout<<inde+1;
    

    return 0;
}