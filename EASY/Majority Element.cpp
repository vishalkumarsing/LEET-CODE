//leetcode 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[nums[i]]>n/2){
                return nums[i];
            }
        }
        return 0;;
        
    }
};

//with function implemeted of majority element

#include<bits/stdc++.h>
using namespace std;

int  majorityElement(vector<int>nums){
    int n=nums.size();
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[nums[i]]++;

    }
    for(int i=0;i<n;i++){
        if(mp[nums[i]]>n/2){
            return nums[i];
        }
    }
    return 0;
}
int main(){
    vector<int>nums= {1, 3, 3, 2, 3, 4, 3};
    int majority=majorityElement(nums);
    cout<<"majorityElement "<<majority<<endl;
    return 0;
}

