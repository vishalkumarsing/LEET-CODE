class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi=0;
        int live =0;
        int count=0;
        for(int i=0;i<gain.size();i++){
            live+=gain[i];
            maxi=std::max(maxi,live);
           
        }
        return maxi;

        
    }
};
