
class Solution {
public:
    int strStr(string haystack, string needle) {
        ios_base::sync_with_stdio;
        cin.tie(NULL);
        cout.tie(NULL);
        if(needle=="") return 0;
        if(needle=="" and haystack=="") return 0;
        if(needle.size()>haystack.size()) return -1;
        int j;
        for(int i=0 ; i<=haystack.size()-needle.size() ; ++i){
            for(j=0 ; j<needle.size() ; ++j){
                if(haystack[i+j]!=needle[j]) break;
            }
            if(j == needle.size()) return i;
        }
        return -1;
    }
};