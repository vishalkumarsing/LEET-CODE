#include<bits/stdc++.h>
using namespace std;
int climbing(int n){
    if(n==1||n==2||n==3){
        return 1;
    }
    int ans=climbing(n-1)+climbing(n-2);
    return ans;
}

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;

    int answer=climbing(n);
    cout<<"nummber of stairs"<<answer<<endl;
    return 0;



}
