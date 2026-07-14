#include<iostream>
using namespace std;
int main(){
    int arr[]={50,40,30,20,10};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n-i;i++){
        if(arr[i]>arr[i+1]){
            arr[i+1]=arr[i];
        }
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}
