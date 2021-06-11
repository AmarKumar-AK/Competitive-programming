#include<bits/stdc++.h>
#define ll long long
#define ARRAY_SIZE 200
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    
    while(t--){
        int a[ARRAY_SIZE]={0},temp=0,m=1;
        int data,x;
        a[0]=1;
        cin>>data;
        for(int i=1 ; i<=data ; ++i){
            for(int index=0 ; index<m ; ++index){
                x=a[index]*i+temp;
                a[index]=x%10;
                temp=x/10;
            }
            int num_of_digit=0;
            int ttemp=temp;
            while(ttemp!=0){
                ttemp/=10;
                num_of_digit++;
            }
            for(int k=0 ; k<num_of_digit ; k++){
                a[m+k]=temp%10;
                temp/=10;
            }
            m=m+num_of_digit;
        }
        for(int i=m-1 ; i>=0 ; --i){
            cout<<a[i];
        }
        cout<<"\n";
    }

    return 0;
}
