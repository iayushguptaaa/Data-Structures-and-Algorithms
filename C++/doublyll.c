#include<stdio.h>
#include<stdlib.h>

// constructing a node
struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;

};

void printList( struct Node * head)
{   
    struct Node* ptr = head;
    while (ptr->next !=NULL)
    {
        printf("element is : %d\n",ptr -> data);
        ptr = ptr->next;
   
    } 
    printf("element is : %d\n",ptr -> data);
    
    while (ptr->prev!=NULL)
    {
        printf("element is : %d\n",ptr -> data);
        ptr = ptr->prev;
    }
    printf("element is : %d\n",ptr -> data);
   

//    return head;
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
    head->prev=NULL;

    second->data=2;
    second->next=third;
    second->prev=head;


    third->data=3;
    third->next=fourth;
    third->prev=second;


    fourth->data=4;
    fourth->next=NULL;
    fourth->prev=third;

    printList(head);

return 0;
}