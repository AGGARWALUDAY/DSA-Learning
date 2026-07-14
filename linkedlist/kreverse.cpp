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
void insertAtHead(Listnode*& head, int val){
    Listnode* n=new Listnode(val);
    n->next=head;
    head=n;
}
void printLinkedList(Listnode* head){
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
Listnode* reversek(Listnode* head,int k){
    //Base Case
    if(head==NULL){
        return head;
    }
    //Recursive Case
    int curr=head;
    int prev=NULL;
    for(int i=0;i<k;i++){
        int temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    Listnode* frommyfriend=reversek(curr,k);
    head->next=frommyfriend;

    return prev;
}
int main(){
    
	Listnode* head = NULL;

	insertAtHead(head, 60);
	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);
    int k=2;
    head=reversek(head,k);
	printLinkedList(head);

    return 0;
}