#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[100]={10,20,30,40,50,60,70};
    int n= sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
       swap(arr[i],arr[i+1]);
    }
            arr[0]=arr[n-1];
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}