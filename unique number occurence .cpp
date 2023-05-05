class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int ,int> m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        set<int> uniqueFreq;
 
  
    for (auto& i : m) {
        if (uniqueFreq.count(i.second))
            return false;
        else
            uniqueFreq.insert(i.second);
    }
 
    
    return true;

    }
};
