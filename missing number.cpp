class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            if(nums[i]==sum){
                sum++;

            }
            
        }
        return sum;
        
        
    }
};
