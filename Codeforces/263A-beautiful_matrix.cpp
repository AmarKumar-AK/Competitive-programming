// 263A - Beautiful Matrix
#include<bits/stdc++.h>
using namespace std;
int main(){
    bool a[6][6];
    int storeI = 0;
    int storeJ = 0; 
    for(int i=1 ; i<6 ; ++i){
        for(int j=1 ; j<6 ; ++j){
            cin>>a[i][j];
            if(a[i][j]){
                storeI = i;
                storeJ = j;
            }
        }
    }
    cout<<abs(3-storeI) + abs(3-storeJ)<<endl;

    return 0;}