#include <iostream>
#include <string>
using namespace std;

struct Node {
   int data;
   struct Node *next;
};

struct Node* head = NULL;

void display(struct Node *head)
{
    while (head != NULL)
    {
        cout<<head->data<<" ";

        head = head->next;
    }
    cout<<endl;
}


void insertAtEnd(int data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

   new_node->data = data;
   new_node->next = NULL;

   if(head==NULL){
       head = new_node;
   }else{
       struct Node * ptr = head;

        while(ptr->next!=NULL){
            ptr = ptr->next;
        }

        ptr->next = new_node;
   }
}

void sort(){
    struct Node* ptr = head;

    while(ptr->next!=NULL){
        struct Node* ptr2 = ptr->next; 

        while(ptr2!=NULL){
            if(ptr->data > ptr2->data){
                int temp = ptr->data;
                ptr->data = ptr2->data;
                ptr2->data = temp;
            }
            ptr2 = ptr2->next;
        }
        ptr = ptr->next;
        display(head);
    }
}

int main() {

    insertAtEnd(20);
    insertAtEnd(18);
    insertAtEnd(17);
    insertAtEnd(16);
    insertAtEnd(16);
    insertAtEnd(887);
    insertAtEnd(15);
    insertAtEnd(3);

    cout<<"Original list:"<<endl;
    display(head);
    cout<<endl;

    sort();

    display(head);
    cout<<endl;

   return 0;
}