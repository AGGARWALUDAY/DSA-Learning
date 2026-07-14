#include<iostream>
using namespace std;
void  f(char inp[],char out[10],int i,int j){
    //Base Case 
    if(inp[i]=='\0'){
        out[j]='\0';
        cout<<out<<" ";
        cout<<endl;
        return;
    };
    //Recursive Case 

    out[j]=inp[i];
    f(inp,out,i+1,j+1);

    f(inp,out,i+1,j);
}
int main() {

	char inp[] = "abc";
	char out[10];

	f(inp, out, 0, 0);

	return 0;
}
