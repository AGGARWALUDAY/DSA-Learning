#include<iostream>
using namespace std;
int merge(int arr[],int m,int s,int end,int count){
    int i=s;
    int j=m+1;
    int k=s;
    int temp[100];
    while(i<=m and j<=end){
        if(arr[i]>arr[j]){
            temp[k]=arr[j];
            count+=m-i+1;
            j++;
            k++;
        }
        else{
            temp[k]=arr[i];
            i++;
            k++;
        }
    }
    while(i<=m){
        temp[k]=arr[i];
        k++;
        i++;
    }
    while(j==end){
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(int l=0;l<k;l++){
        arr[l]=temp[l];
    }
    return count;
}
int givecount(int arr[],int s,int end,int count){
    //Base Case 
    if(s==end){
        return 0;
    }

    //Recursive Case 

    int m=s+(end-s)/2;
    int x=givecount(arr,s,m,count);
    int y=givecount(arr,m+1,end,count);

    int z=merge(arr,m,s,end,count);
    return x+y+z;
}
int main(){
    int arr[]={2,7,5,8,3,4};
    int n=sizeof(arr)/sizeof(int);
    int count=0;
    cout<<givecount(arr,0,n-1,count);
}