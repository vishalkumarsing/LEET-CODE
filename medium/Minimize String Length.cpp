class Solution {
public:
    int minimizedStringLength(string s) {
    
        set<int>st;
        int count=0;
        
        int  n=s.length();
        for(int i=0;i<n;i++){
            st.insert(s[i]);
        }
        for(int i=0;i<st.size();i++){
            
                count++;
            
        }
        return count;
        
    }
};
