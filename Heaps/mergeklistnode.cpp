#include<iostream>
#include<queue>
using namespace std;
class ListNode {

public :

    int val;
    ListNode* next;

    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};
void insertAtHead(ListNode*& head,int val){
    ListNode* n= new ListNode(val);
    n->next=head;
    head=n;
}
class ListNodecop{
    public:
    bool operator()(ListNode* a, ListNode* b){
        if(a->val < b->val){
            return false;
        }
        return true;
    }
};
 
ListNode* mergeSortedLinkedList(const vector<ListNode*>& v){
    priority_queue<ListNode*,vector<ListNode*>,ListNodecop> minheap(v.begin(),v.end());
    ListNode* dummy=new ListNode(0);
    ListNode* temp=dummy;

    while(!minheap.empty()){
        ListNode* min=minheap.top();
        minheap.pop();

        temp->next=min;
        temp=temp->next;
        if(min->next){
            minheap.push(min->next);
        }

    }
    return dummy->next;
}
void printLinkedList(ListNode* head){
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){

    ListNode* head1 = NULL;

    insertAtHead(head1, 7);
    insertAtHead(head1, 4);
    insertAtHead(head1, 1);

    printLinkedList(head1);

    ListNode* head2 = NULL;

    insertAtHead(head2, 8);
    insertAtHead(head2, 5);
    insertAtHead(head2, 2);

    printLinkedList(head2);

    ListNode* head3 = NULL;

    insertAtHead(head3, 9);
    insertAtHead(head3, 6);
    insertAtHead(head3, 3);

    printLinkedList(head3);

    vector<ListNode*> v = {head1, head2, head3};

    ListNode* head = mergeSortedLinkedList(v);

    printLinkedList(head);

    return 0;
}