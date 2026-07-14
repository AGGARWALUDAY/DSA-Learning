#include<iostream>
#include<cstring>
using namespace std;
void f(char inp[],int n,int i,int j,int k){
    //Base Case 

    if(i==n){
        inp[i]='\0';
        cout<<inp<<endl;
        return;
    }
    //Recursive Case

    inp[i]='a';
    f(inp,n,i+1,j,k);

    inp[i]='b';
    f(inp,n,i+1,j+1,k);

    inp[i]='c';
    f(inp,n,i+1,j,k+1);
}
int main(){
    char inp[] = "abc";
	int n = strlen(inp);
    f(inp,n,0,0,0);
}