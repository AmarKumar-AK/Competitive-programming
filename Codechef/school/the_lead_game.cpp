#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    int player1=0,player2=0,who_is_more;
    int max=0,who_has_max;
    while(t--){
        int temp1,temp2;
        cin>>temp1>>temp2;
        //commulative score of player1 and player2
        player1 += temp1;
        player2 += temp2;

        if(player1>player2){
            who_is_more = 1;
        }else{
            who_is_more = 2;
        }

        if(abs(player1-player2) > max){
            max = abs(player1-player2);
            who_has_max = who_is_more;
        }
    }
    cout<<who_has_max<<" "<<max<<endl;
    return 0;
}