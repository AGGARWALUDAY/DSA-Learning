#include<iostream>
#include<vector>
using namespace std;
int printmax(vector<int>arr,int n){
    int i=0;
    int j=0;
    int w_sum=0;
    int max_sum=0;
    while(j<k){
        w_sum+=arr[j];
        j++;

    }
    max_sum=w_sum;
    while(j<n){
        w_sum-=arr[i];
        i++;
    }
}
int main(){
    vector<int>arr={1,4,2,7,6,3,5}
    int n=arr.size();
    printmax(arr,n);
}
