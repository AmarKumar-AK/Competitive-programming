// 118A-string task
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<char>v;
    string s;
    cin>>s;
    for(int i=0 ; i<s.length() ; ++i){
        if(s[i]=='A' || s[i]=='a' || s[i]=='E' || s[i]=='e' || s[i]=='I' || s[i]=='i' || s[i]=='O' || s[i]=='o' || s[i]=='U' || s[i]=='u' || s[i]=='Y' || s[i]=='y'){
            continue;
        }
        else if(s[i]>=65 && s[i]<=90){
            s[i] += 32;
            v.push_back(s[i]);
        }
        else{
            v.push_back(s[i]);
        }
    }
    for(auto x:v)cout<<"."<<x;
    cout<<endl;

    return 0;
}