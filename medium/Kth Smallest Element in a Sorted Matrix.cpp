class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        // int m=matrix[0].size();
        vector<int>v;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v.push_back(matrix[i][j]);
            }
        }
        sort(v.begin(),v.end());
        // for(int i=0;i<v.size();i++){
        //     if(i==k-1){
        //         return v[i];
        //     }
        // }
        return v[k-1];
       

        
        
    }
};
