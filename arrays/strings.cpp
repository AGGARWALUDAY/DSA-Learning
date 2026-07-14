#include<iostream>
using namespace std;
void generatepairs(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            cout<<arr[i]<<" "<<arr[j];
        }
        cout<<endl;
    }
    cout<<endl;
}
int main(){
    int arr[]={10,30,50};
    int brr[]={20,40,60};
    }


