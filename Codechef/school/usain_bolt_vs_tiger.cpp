#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        float finish,distancetoBolt,tigerAccelaration,boltSpeed;
        cin>>finish>>distancetoBolt>>tigerAccelaration>>boltSpeed;

        float total_time_bolt = finish/boltSpeed;
        // cout<<total_time_bolt<<endl;

        float total_distance_tiger = finish + distancetoBolt;
        float total_time_tiger = (float)sqrt((2*total_distance_tiger)/tigerAccelaration);

        // float final_velocity_tiger = sqrt(2 * tigerAccelaration * total_distance_tiger);

        // float total_time_tiger = final_velocity_tiger/tigerAccelaration;

        if(total_time_bolt >= total_time_tiger){
            cout<<"Tiger"<<endl;
        }else{
            cout<<"Bolt"<<endl;
        }


    }
    return 0;
}