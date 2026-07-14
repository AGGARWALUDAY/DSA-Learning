#include<iostream>
#include<cstring>
using namespace std;
void f(char inp[],int n,int i){
    //Base Case 

    if(i==n){
                cout<<inp<<endl;
        return;
    }
    //Recursive Case
    for(int j=i;j<n;j++){

        bool flag=true;
        for(int k=j+1;k<n;k++){
            if(inp[j]==inp[k]){
                flag=false;
                break;
            }
        }
        if(flag){
        swap(inp[i],inp[j]);
         f(inp,n,i+1);
         swap(inp[i],inp[j]);
    }
}
}
int main(){
    char inp[] = "aabc";
	int n = strlen(inp);
    f(inp,n,0);
}