#include<iostream>
using namespace std;
void negativenumber(int arr[],int n){
    int l=0;
    int h=n-1;
    while (l<=h)
    {
        if(arr[l]<0){
            l++;
        }
        else if(arr[h]>0){
            h--;

        }
        else{
            swap(arr[l],arr[h]);
        }
        
    }
    
}


int main(){
    int arr[5]={2,3,4,-5,-1};
    int n=sizeof(arr)/sizeof(int);

     negativenumber(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}
