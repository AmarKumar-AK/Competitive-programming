#include<bits/stdc++.h>
using namespace std;

#define F first 
#define S second 
#define PB push_back
#define MOD 1e9 + 7 
#define REP(i,a,b) for(int i = a ; i < b ; ++i)
#define REPL(i,a,b) for(int i = a ; i <= b ; ++i)
#define REPR(i,a,b) for(int i = a ; i >= b ; --i)
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int, int> pii;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    int num_days;
    string day;
    string day1[]={"mon","tues","wed","thurs","fri","sat","sun"};
    
    while(t--){
        cin>>num_days>>day;
        int more=num_days-28;
        int day2[]={4,4,4,4,4,4,4};
        for(int i=0 ; i<7 ; ++i){
            if(day==day1[i]){
                for(int j=0 ; j<more ; ++j){
                    day2[(i+j)%7]++;
                }
            }
        }
        for(int i=0 ; i<7 ; ++i){
            cout<<day2[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}