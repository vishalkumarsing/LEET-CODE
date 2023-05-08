class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int ans1=0;
        int ans2=0;

        for(int i=0;i<n;i++){
            if(nums[i]>0)
                ans1++;
            
            if(nums[i]<0)
                ans2++;
            }
            if(ans2>ans1)
                return ans2;
            else
            return ans1;
        

        
    }
};
