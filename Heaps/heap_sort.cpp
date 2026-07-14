#include<iostream>
#include<vector>
using namespace std;
void heapify(vector<int>& v, int i,int n){
    int maxindx=i;
    int leftindx=2*i+1;
    if(leftindx<n and v[leftindx]>v[maxindx]){
        maxindx=leftindx;
    }
    int rightindx=2*i+2;
    if(rightindx<n and v[rightindx]>v[maxindx]){
        maxindx=rightindx;
    }
    if(maxindx!=i){
        swap(v[maxindx],v[i]);
        heapify(v,maxindx,n);
    }
}
int main(){
    vector<int> v = {1, 3, 2, 7, 5, 4, 6, 9, 8};
	int n = v.size();

    for(int i= n-1;i>=0;i--){
        heapify(v,i,n);
    }
    int heapsize=n;
    while(heapsize>1){
        swap(v[0],v[heapsize-1]);
        heapsize--;
        heapify(v,1,heapsize);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}