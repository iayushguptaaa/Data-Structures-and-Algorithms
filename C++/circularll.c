#include<stdio.h>
#include<stdlib.h>

// constructing a node
struct Node
{
    int data;
    struct Node* next;
};

// contructing traversal in the linked list
void printList( struct Node * head)
{   struct Node* ptr = head;
    while (ptr->next !=head)
    {
        printf("element is : %d\n",ptr -> data);
        ptr = ptr->next;
    }
    printf("element is : %d\n",ptr -> data);
    // do 
    // {
    //     printf("element is : %d\n",ptr -> data);
    //     ptr = ptr->next;
    // }
    // while(ptr->next !=head)

    
}


// insertion before the head
struct Node* insert_bef_head(struct Node* head,int val)
{
    struct Node* ptr_fast = head->next;
    // struct Node* ptr_slow = head;

    while(ptr_fast->next != head)
    {
        ptr_fast=ptr_fast->next;
        // ptr_slow=ptr_slow->next;
    }
    
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = val;
    ptr_fast->next =p ;
    p->next =head;
    head = p;

    return head;
}


int main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    fourth = (struct Node*) malloc(sizeof(struct Node));

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=fourth;

    fourth->data=4;
    fourth->next=head;
    printf("circular linked list before insertion:\n");
    printList(head);
    
    // to insert data at the position befre the head node : ptr -> head ->second ->third -> fourth ->ptr
    head = insert_bef_head(head,23);
    head = insert_bef_head(head,33);
    head = insert_bef_head(head,53);


    
    printf("circular linked list after insertion:\n");

    printList(head);
    return 0;

}

