#include<bits/stdc++.h>
// #include <boost/multiprecision/cpp_int.hpp> 
// using boost::multiprecision::cpp_int;
using namespace std;

#define F first 
#define S second 
#define PB push_back
#define MOD 1e9 + 7 
#define REP(i,a,b) for(int i = a ; i < b ; ++i)
#define REPL(i,a,b) for(int i = a ; i <= b ; ++i)
#define REPR(i,a,b) for(int i = a ; i >= b ; --i)
#define S1(a) scanf("%d",&a);
#define P1(a) printf("%d\n",a);
#define P2(a) printf("%d ",a);
#define FAST ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define ENTER cout<<endl;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int, int> pii;
int main(){
    FAST;
    int t,k;
    int mat[8][8] = {{'O','.','.','.','.','.','.','.'},
                    {'.','.','.','.','.','.','.','.'},
                    {'.','.','.','.','.','.','.','.'},
                    {'.','.','.','.','.','.','.','.'},
                    {'.','.','.','.','.','.','.','.'},
                    {'.','.','.','.','.','.','.','.'},
                    {'.','.','.','.','.','.','.','.'},
                    {'.','.','.','.','.','.','.','.'}};
    cin>>t;
    while(t--){
        cin>>k;
        int storek = k;
        bool flag=0;
        k=k-1;
        REP(i,0,8){
            REP(j,0,8){
                if(i==0 && j==0)continue;
                else{
                    if(k>0){
                        mat[i][j]='Y';
                        --k;
                    }
                    if(k<=0){
                        flag=1;
                        break;
                    }
                }
            }
            if(flag)break;
        }
        REP(i,0,7){
            REP(j,0,7){
                if((mat[i][j]=='Y' || mat[i][j]=='O') && mat[i+1][j]=='.'){
                    mat[i+1][j]='X';
                }
                if((mat[i][j]=='Y' || mat[i][j]=='O') && mat[i][j+1]=='.'){
                    mat[i][j+1]='X';
                }
                if((mat[i][j]=='Y' || mat[i][j]=='O') && mat[i+1][j+1]=='.'){
                    mat[i+1][j+1]='X';
                }
                
            }
        }
        
        REP(i,0,8){
            REP(j,0,8){
                if(mat[i][j]=='Y') mat[i][j]='.';
                cout<<(char)mat[i][j];
            }
            ENTER;
        }
    }

    return 0;
}