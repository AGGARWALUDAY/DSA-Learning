#include<iostream>
#include<climits>
using namespace std;
bool checkpossible(int p,int l,int rank[],int timemax,int n){
    int totalParnata=0;
    for(int i=0;i<n;i++){
        int time=0;
        int j=1;
        while(true){
            time+=j*rank[i];

            if(time>timemax)  break;
             j++;
            totalParnata++;

            if(totalParnata>=p){
                return true;
            }
        }
    }   
    return false;
}
int Minimumtime(int p,int l,int rank[],int n){
    int s=1;
    int end=100;
    int ans;
    while(s<=end){
        int m=s+(end-s)/2;

        if(checkpossible(p,l,rank,m,n)){
            ans=m;
            end=m-1;
        }
        else{
            s=m+1;
        }
    }

    return ans;
}
int main(){


    int p=10;
 
    int l=4;

    int rank[]={1,2,3,4};

    int n=sizeof(rank)/sizeof(int);
    cout<<Minimumtime(p,l,rank,n)<<endl;


}