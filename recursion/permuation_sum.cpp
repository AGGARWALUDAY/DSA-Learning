#include<iostream>
using namespace std;
void generatesum(int arr[],int n,int target,int i,int out[],int sum){
    //Base Case 
    if(target==sum){
        cout<<out;
    }
    if(i==n){
        return;
    }
    //Recursive Case
    for(int j=i;j<n;j++){
       if(sum<target){
        sum+=out[i];
        out[i]=arr[j];
       }
       generatesum(arr,n,target,i+1;out,sum);
    }
}
int main(){
    int arr[]={2,3,5,7};
    int n=sizeof(arr)/sizeof(int);
    int target=7;
    int out[20];
    generatesum(arr,n,target,i,out,sum);
}