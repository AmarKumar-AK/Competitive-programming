#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],first_min,second_min;
        first_min = second_min = INT_MAX; 
        for(int i=0 ; i<n ; ++i){
            cin>>arr[i];
            if(arr[i] < first_min){
                second_min = first_min;
                first_min = arr[i];
            }
            else if(arr[i] < second_min ){
                second_min = arr[i];
            }
        }
        cout<<first_min + second_min<<endl;
    }
    return 0;
}