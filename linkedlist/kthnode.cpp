#include<iostream>
using namespace std;
class Listnode{
public:

    int val;
    Listnode* next;

    Listnode(int val){
        this->val=val;
        this->next=NULL;
    }

};
Listnode* insertAtHead(Listnode*& head,int val){
    Listnode* n=new Listnode(val);
    n->next=head;
    head=n;
    return head;
}

Listnode* givereverse(Listnode*& head,int k){
    Listnode* curr=head;
    Listnode* prev=NULL;
    while(curr!=NULL){ 
        Listnode* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}

Listnode* givenode(Listnode* head,int k){
    Listnode* reverse=givereverse(head,k);
    while(reverse!=NULL and k>0){
        reverse=reverse->next;
        k--;
    }
    return reverse;
}

int main(){

   	Listnode* head = NULL;

	insertAtHead(head, 70);
	insertAtHead(head, 60);
	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

    int k=3;

    Listnode* ans=givenode(head,k);
    cout<<ans->val<<" ";
    cout<<endl;

}