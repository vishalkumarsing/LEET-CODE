class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n+1);
        for(int i=0;i<n;i++){
            v[nums[i]]++;
        }
        vector<int>ans;
        for(int i=1;i<=n;i++){
            if(v[i]==2){      //check duplicte array
                ans.push_back(i);
            }
        }
        for(int i=1;i<=n;i++){
            if(v[i]==0){
                ans.push_back(i);//check it start with one and another number
            }
        }
        return ans;
    }
};
