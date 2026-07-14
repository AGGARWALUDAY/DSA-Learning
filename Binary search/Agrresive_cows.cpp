#include<iostream>
#include<climits>
using namespace std;
bool canplacecows(int c,int n,int post[],int m){
    int cowsplaces=1;
    int previouscow=post[0];
    for(int i=1;i<n;i++){
        if(post[i]-previouscow>=m){
            previouscow=post[i];
            cowsplaces++;
            if(cowsplaces==c){
            return true;
        }
        }
    }
    return false;
}
int largestMinDist(int n,int c,int post[]){
    int s=INT_MAX;
    int e=post[n-1]-post[0];
    for(int i=1;i<n;i++){
        if(post[i]-post[i-1]<s){
            s=post[i]-post[i-1];
        }
    }
    int ans;
    while(s<=e){
    int m=s+(e-s)/2;

    if(canplacecows(c,n,post,m)){
        ans=m;
        s=m+1;
    }
    else{
        e=m-1;
    }
    }
    return ans;
}
int main(){
int n = 5;
int c = 3;
int post[] = {1, 2, 4, 8, 9};
cout << largestMinDist(n, c, post) << endl;
}