#include <bits/stdc++.h>
using namespace std;

struct Node {
    int d;
    Node* next;

    Node(int x) {
        d = x;         
        next = NULL;
    }
};

Node* deleteHead(Node* head) {
    if (head == NULL) return NULL;  

    Node* temp = head;
    head = head->next;
    delete temp;

    return head;
}

// Helper function to print the linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->d << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Creating a simple linked list: 10 -> 20 -> 30
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    cout << "Original List: ";
    printList(head);

    // Delete head
    head = deleteHead(head);

    cout << "After deleting head: ";
    printList(head);

    return 0;
}
//DELETE TAIL OF LINKED LIST;
//Node *deltetail(* head){
/*
if(head==NULL || head->next==NULL) return NULL;
Node *temp=head;
while(temp->next->next!=NULL){
temp=temp->next;}
delete temp->next;
temp->next=NULL;
return head;


}
// delete K th element of lined list
Node *deletek(Node *head, int k){
if(head==NULL) return head;
if(k==1){
Node* t=head;
head=head->next;
delete t;

return head;}

Node *t=head; Node *prev=NULL;
while(t!=NULL){
c++;
if(c==k){
prev->next=prev->next->next;}

prev=t;
t=t->next;
}
return head;
}

//Remove every k'th node
Node* deleteK(Node* head, int k) {
        // code here
        
        
        Node *t=head;
        Node *pre=NULL;
        int c=0;
        while(t!=NULL){
            c++;
            if(c==k){
                pre->next=pre->next->next;
                t=t->next;
                c=0;
            }
            else {
            pre=t;
            t=t->next;
            }
        }
        return head;
    }
        //



        delete val of linkedlist
        node *deletele(node *head,int val){
        if(head==NULL) return null;
        while(head!=NULL && head->val==val){
        head=head->next;}
        
        
        
        
        }
*/







