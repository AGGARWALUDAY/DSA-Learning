#include<iostream>
#include<string>
using namespace std;
void generateparenthesis(int n,char out[10],int open ,int close,int i){
    //Base Case 
    if(i==2*n){
        out[i]='\0';
        cout<<out<<endl;
        return;
    }
    

    //Recursive Case
    if(open<n)
    {
        out[i]='(';
    generateparenthesis(n,out,open+1,close,i+1);

    }
    if(close<open)
    {
    out[i]=')';
    generateparenthesis(n,out,open,close+1,i+1);
}

}
int main(){
    int n=2;
    char out[17];
    generateparenthesis(n,out,0,0,0);
}