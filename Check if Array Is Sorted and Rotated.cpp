class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                sum++;
            }
        }
        if(nums[n-1]>nums[0]){
            sum++;
        }
        
    cout<<sum<<" ";
    return sum<=1;
    
        
    
        
    }
};
