class Solution {
public:
    int differenceOfSums(int n, int m) {
        int ans=0;
        int sum=0;
        int res=0;
        for(int i=0;i<=n;i++){
            if(i%m==0){
                ans+=i;
             
            }
            else if(i%m!=0){
                sum+=i;
            }
            
        }
        int df=sum -ans;;
        return df;
    
        
        
    }
};
