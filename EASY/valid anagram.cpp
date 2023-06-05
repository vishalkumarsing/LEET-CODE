class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp;
        map<char,int>mp1;
        for(auto i:s){
            mp[i]++;
        }
        for(auto i:t){
            mp1[i]++;
        }
        if(s.size()!=t.size()){
            return false;
        }
        if(mp!=mp1){
            return false;
        }
        return true;
    }
};
