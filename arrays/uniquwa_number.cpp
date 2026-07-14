#include<iostream>
using namespace std;
int main(){
    int arr[100]={3,1,4,1,2,3,4};
    int n=7;
    for(int i=0;i<n;i++){
        int x[100]=i;
        int count=sizeof(x)/sizeof(int);
        for(int j=0;j<count;j++){
            if(i!=x)
            cout<<i;
        }
    }
}