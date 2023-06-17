class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l=0;
        int h=arr.size()-1;
        while(h-l>=k){
            if(x-arr[l]>arr[h]-x){
                l++;
            }
            else{
                h--;
            }
        }
        vector<int>v;
        for(int i=l;i<=h;i++){
            v.push_back(arr[i]);
        }
        return v;

        
    }
};
