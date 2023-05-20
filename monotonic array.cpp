class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size(),cnt=0,dnt=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j>i;j--){
                if(nums[i]<=nums[j]){
                cnt++;
                }
                if(nums[i]>=nums[j]){
                dnt++;
                }
            }
        }
        
        if(cnt==(n-1)|| dnt==(n-1)){
            return true;
        }
        cout<<cnt<<dnt<<endl;
        return false;
    }
};
