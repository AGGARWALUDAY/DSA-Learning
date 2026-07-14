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
int computelength(ListNode* head){
    int count=0;
    while(head){
        count++;
        head=head->next;
    }
    return count;
}
ListNode* bubbleSort(ListNode* head){
    
    int n=computelength(head);
    
    int i=1;
    while(i<n){
     ListNode* curr=head;
    ListNode* prev=NULL;

        int j=0;
        while(j<n-i){

        ListNode* temp=curr->next;

        if(temp->val<curr->val){
            curr->next=temp->next;
            temp->next=curr;
            if(prev==NULL){
                head=temp;
            }
            else{
                prev->next=temp;
            }

            prev=temp;
        }
        else{
            prev=curr;
            curr=curr->next;
        }
        j++;
    }
}
    i++;
    return head;
}
    
int main(){
    ListNode* head = NULL;

	insertAtHead(head, 10);
	insertAtHead(head, 20);
	insertAtHead(head, 30);
	insertAtHead(head, 40);
	insertAtHead(head, 50);

	printLinkedList(head);

	head = bubbleSort(head);

	printLinkedList(head);

	return 0;
}