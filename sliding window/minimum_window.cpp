#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>
#include<string>
using namespace std;
int main(){
    string  s = "ADOBECODEBANC";
    string t = "ABC";

    int m=s.size();
    int n=t.size();

    int i=0;
    int j=0;
    unordered_map<char,int> tmap;

    for(char ch: t){
        tmap[ch]++;
    }
    int tcnt=0;

    tcnt=tmap.size();
    int final_min=INT_MAX;
    int startindx;
    int finalindx;
    while(j<m){
        char cha=s[j];
        if(tmap.find(cha)!=tmap.end()){
            tmap[cha]--;
            if(tmap[cha]==0){
                tcnt--;
            }
        }
        if(tcnt==0){
            if(j-i+1<final_min) {
                startindx=i;
                finalindx=j;
            }

            while(tcnt==0){
                char ch1=s[i];
                if(tmap.find(ch1)!=tmap.end()){
                    tmap[ch1]++;
                    if(tmap[ch1]==1){
                        i++;
                        tcnt++;
                    }
                    else{
                        i++;
                         if(j-i+1<final_min) {
                startindx=i;
                finalindx=j;
            }
                    }
                }
                else{
                    i++;
                     if(j-i+1<final_min) {
                startindx=i;
                finalindx=j;
            }
                }
            }
        }
        j++;
    }
    cout<<s.substr(startindx,finalindx);
}