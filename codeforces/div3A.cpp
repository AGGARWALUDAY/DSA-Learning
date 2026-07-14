#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        if(x<=3){
            cout<<x<<"\n";
        }
        else{
            cout<<x%2<<"\n";
        }
    }
}