class Solution {
  public:
    void printTriangle(int n) {
         for(int i=1;i<=n;i++){
            for(int j=n;j>i; j--){  //for printing the spaces first
                cout<<" ";
            }
            //for printing the stars in each row
            for(int j=1;j<=2*i-1;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        // code here
        
    }
};
