// 112A - Petya and Strings
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0 ; i<s1.size() ; ++i){
        if(isupper(s1[i])) s1[i] = tolower(s1[i]);
        if(isupper(s2[i])) s2[i] = tolower(s2[i]);
    }
    if(s1==s2) cout<<"0";
    else if(s1<s2) cout<<"-1";
    else if(s1>s2) cout<<"1";

    return 0;
}