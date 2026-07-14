#include<iostream>
using namespace std;
void f(int n,int out[],int r){
    //Base Case 
    if(r==n){
        for(int i=0;i<n;i++){
            cout<<out[i]<<" ";
        }
        cout<<endl;
        return;
    }
    //Recursive Case 
    for(int j=0;j<n;j++){
        bool flag =true;
          for (int i = 0; i < r; i++) {
            if (out[i] == j || out[i] == j - (r - i) || out[i] == j + (r - i)) {
                flag = false;
                break;
            }
        }
        if(flag){
            out[r]=j;
        f(n,out,r+1);
        }
    }
}
int main() {

	int n;
	cin >> n;
	f(n, out, 0);

	return 0;
}