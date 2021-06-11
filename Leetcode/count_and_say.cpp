class Solution {
public:
    string countAndSay(int n) {
        string s;
        int j;
        vector<string>vs(n+2);
        vs[1] = "1";
        for(int i=2 ; i<=n ; ++i){
            int cnt=1;
            s="";
            for(j=1 ; j<vs[i-1].size() ; ++j){

                if(vs[i-1][j-1]==vs[i-1][j]) cnt++;
                else{
                    s+= to_string(cnt);
                    s+=vs[i-1][j-1];
                    cnt=1;
                }
            }
            s+= to_string(cnt);
            s+=vs[i-1][j-1];
            vs[i]=s;
        }
        return vs[n];
    }
};