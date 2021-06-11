// 282A-Bit++
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt=0;
    while(n--){
        string s;
        cin>>s;
        if(s[1]=='+')cnt++;
        else if(s[1]=='-')cnt--;
    }
    cout<<cnt<<endl;

    return 0;
}