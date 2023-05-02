class Solution {
public:
    int mySqrt(int x) {
        long long v=0;
        while(v*v<=x){
            v++;
        }
        return v-1;
        
    }
};
