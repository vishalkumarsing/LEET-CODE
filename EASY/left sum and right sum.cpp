class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        
        int leftsum = 0;
        int rightsum = 0;

        for (int i = 0; i < n; i++) {
            rightsum += nums[i];
        }

        for (int i = 0; i < n; i++) {
            rightsum -= nums[i];
            ans[i] = abs(leftsum - rightsum);
            leftsum += nums[i];
        }

        return ans;
    }
};  
