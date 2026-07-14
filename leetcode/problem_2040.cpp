#include<iostream>
using namespace std;
int main(){
  int  nums1[] = [2,5];
  int nums2[]= [3,4];
  int n=sizeof(nums1)/sizeof(int);
  int m=sizeof(nums2)/sizeof(int);
  int k=2;
  int minimum=INT_MIN;
  int product[];
  int lenght;
  for(int i=0;i<n;i++){
   
    int temp=nums1[i];
   
    minimum=min[temp,minimum];

    for(int j=0;j<m;j++){
   
      product[]=minimum*nums2[j];
   
    }

    length=sizeof(product)/sizeof(int);
    if(length==k){
      cout<<product[k];
    }
    if(length<k){
      
    }
  }

}