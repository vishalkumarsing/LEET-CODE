class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count=0;
        int n=grid.size();
        for(int i=0;i<n;i++){//row 0
            for(int j=0;j<n;j++){//col 0
                int is_equal=true;
                for(int k=0;k<n;k++){
                    if(grid[i][k]!=grid[k][j]){
                        is_equal=false;
                        break;
                    }


                }
                count+= is_equal;
            }
            
        }
        return count;

        
        
    }
};
