#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* insert_at_head(struct Node* head, int value )
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=value;

    return ptr;
}

struct Node* insert_in_btw(struct Node * head,int after,int val)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node* p =head;
    int i=0;//this is just to count the number of steps we need to traverse in the linked list
    while( i != after-1)
    {
        p=p->next;
        i++;
    }
    // linking part list-->p-->ptr-->list
    ptr->next = p->next;
    ptr->data=val;
    p->next=ptr;

    return head;

}


struct Node* insert_in_end(struct Node * head,int val)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node* p = head;

    while (p->next != NULL)
    {
        p=p->next;
    }
    ptr->next =NULL;
    ptr->data =val;
    p->next=ptr;

    return head; 

}

struct Node* insert_aft_node(struct Node * head,struct Node * node,int val)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    
    ptr->data=val;
    ptr->next=node->next;
    node->next = ptr;

    return head; 

}


void printList( struct Node * ptr)
{
    while (ptr !=NULL)
    {
        printf("element is : %d\n",ptr -> data);
        ptr = ptr->next;
    }
}

int main()
 {   //initialise all the pointer variables of the type struct node
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

 // dynamically allocate memory to them:
    
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    fourth = (struct Node*) malloc(sizeof(struct Node));

    // linking first and second
    head ->data=10;
    head ->next=second;

    // linking second and third
    second ->data = 20;
    second ->next = third;

    // linking third and fourth

    third ->data = 30;
    third ->next =fourth;

    // terminating this list:

    fourth ->data = 40;
    fourth ->next = NULL;

    // to insert an element at the head

    
    printList(head);
    // head = insert_at_head(head,12);
    // head = insert_in_btw(head,2,25);
    // head = insert_in_end(head,55);
    // head = insert_aft_node(head,second,25);
    // uncomment the functions to run!!
    printf("\n");
    printList(head);


    return 0;



}