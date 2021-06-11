#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    float y;
    cin>>x>>y;
    // float t=y-x-0.5;
    if(x%5!=0 || y-x<0.5){
        // printf("%.2f",y);
        cout<<y;
    }
    else{
        printf("%.2f",y-x-0.50);
    }
    return 0;
}