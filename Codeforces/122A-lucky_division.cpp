// 122A-Lucky Division
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int store_num = num;
    int flag=0;
    while(store_num>0){
        int temp = store_num%10;
        if(temp != 4 && temp != 7){
            flag=1;
            break;
        }
        store_num/=10;
    }
    if(flag==0){
        cout<<"YES";
    }else{
        if(num%4==0 || num%7==0 || num%47==0 || num%74==0 || num%447==0 || num%474==0 || num%477==0 || num%747==0 || num%774==0){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }



    return 0;
}