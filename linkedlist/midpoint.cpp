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

void printlistnode(Listnode* head){
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
Listnode* findmidpoint(Listnode* head){
    Listnode* slow=head;
    Listnode* fast=head;

    while(fast!=NULL and fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
int main(){
    Listnode* head = NULL;

	insertAtHead(head, 60);
	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

    Listnode* midpoint=findmidpoint(head);
    midpoint!=NULL?cout<<midpoint->val<<endl:cout<<"The List is empty"<<endl;

    return 0;
}