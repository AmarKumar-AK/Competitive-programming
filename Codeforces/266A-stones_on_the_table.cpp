// 266A- Stones on the Table
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch[n];
    cin>>ch[0];
    char curr = ch[0];
    int cnt=0;
    for(int i=1 ; i<n ; ++i){
        cin>>ch[i];
        if(curr == ch[i]) cnt++;
        else curr=ch[i];
    }
    cout<<cnt;


    return 0;
}