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
   ListNode* n= new ListNode(val);
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
ListNode* sumOfLinkedList(ListNode* head1,ListNode* head2){
    ListNode* head=NULL;
    int carry=0;
    while(head1 || head2 || carry==1){
        int d1=head1!=NULL?head1->val : 0; 
        int  d2=head2!=NULL? head2->val :0;
        int sum1=d1+d2+carry;
        carry=sum1/10;

        int sum=sum1%10;

        ListNode* n= new ListNode(sum);
        n->next=head;
        head=n;

        head1=head1!=NULL?head1->next : NULL;
        head2=head2!=NULL?head2->next : NULL;

    }
    return head;
}

int main(){
   	ListNode* head1 = NULL;

	insertAtHead(head1, 9);
	insertAtHead(head1, 9);
	insertAtHead(head1, 9);
	insertAtHead(head1, 9);
	insertAtHead(head1, 9);

	printLinkedList(head1);

	ListNode* head2 = NULL;

	insertAtHead(head2, 9);
	insertAtHead(head2, 9);
	insertAtHead(head2, 9);

	printLinkedList(head2);

	ListNode* head = sumOfLinkedList(head1, head2);

	printLinkedList(head);


	return 0;
}