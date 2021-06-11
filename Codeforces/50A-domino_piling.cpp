// 50A-Domino piling
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int temp = m*n;
    if(temp&1)cout<<(temp-1)/2;
    else cout<<temp/2;

    return 0;
}
