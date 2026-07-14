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
Listnode* insertAtHead(Listnode* head,int val){
    Listnode* n=new Listnode(val);
    n->next=head;
    head=n;
}

bool checkpalindrome(Listnode* head){

    if(!head || !head->next) return true;
    Listnode* slow=head;
    Listnode* fast=head;

    while(fast and fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    Listnode* h1=head;

    Listnode* curr=slow;
    Listnode* prev=NULL;

    while(curr){
        Listnode* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }

    Listnode* h2=prev;
    while(h2){
        if(h2->val!=h1->val) return false;

        h2=h2->next;
        h1=h1->next;
    }
    return true;
}
int main(){
    Listnode* head = NULL;

	insertAtHead(head, 10);
	insertAtHead(head, 20);
	insertAtHead(head, 30);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

    if(checkpalindrome(head)==true){
        cout<<"true";
    }
    else{
        cout<<"False";
    }

}