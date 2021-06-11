#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,n;
    long long prev,next;
    cin>>t;
    while(t--){
        cin>>n>>prev;
        long long sum = 0;
        for(int i=1 ; i<n ; ++i){
            cin>>next;
            sum += abs(next-prev)-1;
            prev = next;
        }
        cout<<sum<<endl;
    }

    return 0;
}