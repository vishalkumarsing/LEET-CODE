class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
             bool flag=true;
            for(int j=0;j<n-i-1;j++){
                if(nums[j]>nums[j+1]){
                    bool flag=false;
                    swap(nums[j],nums[j+1]);
                

                }
            }
            if(flag==false)
            break;


        }
    
        
    }
};

//with function of sort colors

#include<iostream>
#include<vector>

using namespace std;

void sortcolors(vector<int>&nums){
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]){
                bool flag=false;
                swap(nums[j],nums[j+1]);
            }

        }
        if(flag==false)
        break;

    }
}
int main(){
    vector<int>nums={2, 0, 2, 1, 1, 0};
    sortcolors(nums);

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";

    }
    cout<<endl;
    return 0;
}
