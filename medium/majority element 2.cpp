class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    int n=nums.size();
     vector<int>v;
     map<int,int>mp;
     for(int i=0; i<n; i++){
         mp[nums[i]]++;
         if(mp[nums[i]]>n/3){
             v.push_back(nums[i]);
             mp[nums[i]]=INT_MIN; 
         }
     }  
     return v;
        
    }
};
