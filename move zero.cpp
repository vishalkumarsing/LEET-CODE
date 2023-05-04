class Solution {
public:
    void moveZeroes(vector<int>& nums) {   
        int i=0,k=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[k]=nums[i];
                if(i!=k){
                    nums[i]=0;

                }
                k++;
            } 
        }
        
        
    }
};
