class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        
        long ans1=0;
        long ans2=0;
        
        int zero1=0;
        int zero2=0;
        
        for(int i=0;i<n;i++){
            ans1+=nums1[i];
            if(nums1[i]==0){
                ans1++;
                zero1++;
            }
        
        }
         for(int i=0;i<m;i++){
            ans2+=nums2[i];
            if(nums2[i]==0){
                ans2++;
                zero2++;
            }
        
        }
        
        if(ans1==ans2){
            return ans1;
        }
        else{
            if(ans1<ans2){
                if(zero1>0){
                    return ans2;
                }
                else
                    return -1;
            }
            else{
                if(zero2>0){
                    return ans1;
                }
                else
                    return -1;
                
            }
        }
        
        
        
        
    }
};
