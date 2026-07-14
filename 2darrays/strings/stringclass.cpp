#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = " 3+5 / 2 ";
	int n = str.size();
    sort(str.begin(),str.end());
    for(int i=0;i<n;i++){
        cout<<str[i]<<" ";
    }
}