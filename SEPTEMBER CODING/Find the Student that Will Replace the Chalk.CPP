class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long vishal=0;
        for(int i=0;i<chalk.size();i++){
            vishal+=chalk[i];
        }
        //add the total chalk

        
    
    k %=vishal;//dividde the total number of chalk
    for(int i=0;i<chalk.size();i++){
        if(k<chalk[i]){
            return i;

        }
        k-=chalk[i];
    }
    return -1;

    
    }
};Find the Student that Will Replace the Chalk
