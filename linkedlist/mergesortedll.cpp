#include<iostream>
using namespace std;
class ListNode{
public:
    int val;
    ListNode* next;
    ListNode(int val){
        this->val=val;
        this->next=NULL;
    }

};

void insertAtHead(ListNode*& head,int val){
    ListNode* n=new ListNode(val);
    n->next=head;
    head=n;
}

void printLinkedList(ListNode* head){
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
ListNode* mergeSortedLinkedList(ListNode* head1,ListNode* head2){

    ListNode* h1=head1;
    ListNode* h2=head2;
    ListNode* h;

    if(h1==NULL){
        return h2;
    }
    if(h2==NULL){
        return h1;
    }


    if(h1->val < h2->val){
        h=h1;
        ListNode* hff =mergeSortedLinkedList(head1->next,head2);
        h->next=hff;
    }
    else{
        h=h2;
        ListNode* hff=mergeSortedLinkedList(head1,head2->next);
        h->next=hff;
    }

    return h;
}
int main(){
    	ListNode* head1 = NULL;

	insertAtHead(head1, 50);
	insertAtHead(head1, 30);
	insertAtHead(head1, 10);

	printLinkedList(head1);

	ListNode* head2 = NULL;

	insertAtHead(head2, 60);
	insertAtHead(head2, 40);
	insertAtHead(head2, 20);

	printLinkedList(head2);

	ListNode* head = mergeSortedLinkedList(head1, head2);

	printLinkedList(head);
}