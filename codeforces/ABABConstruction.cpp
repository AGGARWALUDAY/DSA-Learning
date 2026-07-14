#include<bits/stdc++.h>
#define endl '\n'
using ll=long long;
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a=(n+1)/2;
    int b=n/2;
    string x;
    cin>>x;
    for(int i=0;i<x.size();i++){
        char c=x[i];
        int q=0;
        if(a>b){
            if(c=='a'){
                a--;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
        else if(b>a){
            if(c=='b'){
                b--;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }#include<bits/stdc++.h>
#define endl '\n'
using ll=long long;
using namespace std;
void solve(){
    ll n;
    cin>>n;
    ll a=(n+1)/2;
    ll b=n/2;
    string x;
    cin>>x;
    ll q=0;
    for(ll i=0;i<x.size();i++){
        char c=x[i];
        if(a>b){
            if(c=='b') {
               cout<<"NO"<<endl;
               return;
           }
           a--;
        }
        else if(b>a){
           if(c=='a') {
               cout<<"NO"<<endl;
               return;
           }
           b--;
        }
        else{
            if(c=='a'){
                a--;
                if(q) {b--; q=0;
                }
            }
            else if(c=='b'){
                    b--;
                    if(q) {a--; q=0;
                    }
            }
            else{
                if(q){ a--; b--; q=0;
                }
                else{
                    q++;
                }
            }
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}
        else{
            if(c=='a'){
                a--;
                if(q) b--; q=0;
            }
            else if(c=='b'){
                    b--;
                    if(q) a--; q=0;
            }
            else{
                if(q) a--; b--; q=0;
                else{
                    q++;
                }
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}