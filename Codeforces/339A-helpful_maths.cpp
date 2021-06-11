// 339A-helpful_maths
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<char>v;
    for(int i=0 ; i<s.size() ; ++i){
        if(s[i]!='+'){
            v.push_back(s[i]);
        }
    }
    sort(v.begin(),v.end());
    cout<<*v.begin();
    int cnt=0;
    if(v.size()!=1){
        for(auto x:v){
            if(cnt==0){
                cnt++;
                continue;
            }
            cout<<'+'<<x;
        }
    }

    return 0;
}