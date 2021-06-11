// 58A-Chat room
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char a[5]={'h','e','l','l','o'};
    int st=0;
    bool flag=0;
    for(int i=0 ; i<s.size() ; ++i){
        if(s[i]==a[st]){
            st++;
            if(st==5){flag=1; break;}
        }
    }
    if(flag)cout<<"YES";
    else cout<<"NO";
    return 0;
}