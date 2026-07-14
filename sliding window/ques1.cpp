#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 4, 2, 7, 6, 3, 5};
	int n = sizeof(arr) / sizeof(int);
	int k = 4;
    int i=0;//to store the value of ith or 1st element of a sliding in a window
    int j=0;//to the store the last or jth element in the sliding window in an array
    int w_sum=0;
    int maxsum;

    //compute the sum of 1st slide

    while(j<k){
        w_sum+=arr[j];
        j++;
    }
    maxsum=w_sum;

    while(j<n){
        w_sum-=arr[i];

        i++;

        w_sum+=arr[j];

        maxsum=max(w_sum,maxsum);

        j++;

    }
    cout<<maxsum;

}