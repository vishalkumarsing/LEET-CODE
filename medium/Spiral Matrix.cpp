class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        int m=matrix.size();//row
        int n=matrix[0].size();//col
        int total_elements=m*n;

        int startingRow=0;
        int endingcol=n-1;
        int startingcol=0;
        int endingRow=m-1;

        int count=0;
        while(count < total_elements){
            for(int i=startingcol;i<=endingcol && count<total_elements;i++){
                v.push_back(matrix[startingRow][i]);
                count++;
               
            }
            startingRow++;
            for(int i=startingRow;i<=endingRow && count<total_elements;i++){
                v.push_back(matrix[i][endingcol]);
                count++;

            }
            endingcol--;
            for(int i=endingcol;i>=startingcol && count<total_elements;i--){
                v.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            for(int i=endingRow;i>=startingRow && count<total_elements;i--){
                v.push_back(matrix[i][startingcol]);
                count++;
            }
            startingcol++;


        }
        return v;
        

        
    }
};
