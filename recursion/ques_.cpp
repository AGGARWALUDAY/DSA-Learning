#include<iostream>
#include<cstring>
using namespace std;

void generatepermutation(char s[],int n,int i){
    //Base Case 
    if(i==n){
        cout<<s<<endl;
    }
    //Recursive Case
    for(int j=i;j<n;j++){
        swap(s[i],s[j]);
        generatepermutation(s,n,i+1);
        swap(s[i],s[j]);
    }
}
int main(){
    char  s[]="abc";
    int n=strlen(s);
    generatepermutation(s,n,0);
}