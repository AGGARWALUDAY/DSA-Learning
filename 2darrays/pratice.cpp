#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void diagonal(int arr[3][4],int m,int n,int i,int j){
  int length=min(m-i,n-j);
  vector<int> temp;
  for(int k=0;k<length;k++){
   temp.push_back(arr[i+k][j+k]);
  }
  sort(temp.begin(),temp.end());

  for(auto t:temp){
    cout<<t<<" ";
  }
  cout<<endl;
}


void printdiagonal(int arr[3][4],int m,int n){

  for(int i=1;i<m;i++){
    diagonal(arr,m,n,i,0);
  }
  
  for(int j=0;j<n;j++){
    diagonal(arr,m,n,0,j);
  }
  
}
int main() {
   int  arr[3][4] ={{3,3,1,1},{2,2,1,2},{1,1,1,2}};

    int m=3;
    int n=4;
    
    printdiagonal(arr,m,n);
    
	return 0;
}