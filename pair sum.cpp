#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v{3,4,5,6,7};
    int ans=10;

    for(int i=0;i<v.size();i++){
        int element=v[i];
        for( int j=i+1;j<v.size();j++){
            int number=v[j];
            if(element+number==ans){
                cout<<"pair "<<element<<"with"<<number<<endl;

            }


        }

    }
}
