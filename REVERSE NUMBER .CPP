//REVERSE INTEGER QUESTION NUMBER 7(MEDIUM)

class Solution {
public:
    int reverse(int x) {
        
        int ans=0;
        while(x!=0){
            int digit=x%10;
            if((ans> INT_MAX/10) || (ans <INT_MIN/10)){
                return 0;
            }

            ans=(ans*10)+digit;
            x=x/10;
        }
        return ans;
    }
};


//WITH FUNCTION

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number"<<endl;

    cin>>n;
    int ans=0;
    while(n!=0){
        int digit=n%10;
        ans=(ans*10)+digit;
        n=n/10;
    }
    cout<<ans;
    return 0;


}


    
