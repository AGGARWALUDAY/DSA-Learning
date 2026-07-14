#include<iostream>
#include<queue>
using namespace std;
int main(){
    int freqmap[26]={0};
    queue<char> q;

    char ch;

    while(true){
        cin>>ch;
        freqmap[ch-'a']++;
        if(ch=='.') break;

        if(freqmap[ch-'a']==1){
            q.push(ch);
        }

        while(!q.empty() and freqmap[q.front()-'a']>1){
            q.pop();
        }

        if(q.empty()){
            cout<<-1;
        }
        else{
            cout<<q.front();
        }
    }

}