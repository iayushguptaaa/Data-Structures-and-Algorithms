#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* delete_first(struct Node * head)
{
    struct Node * ptr= head;
    head = head->next;
    free(ptr);
    return head;
}



struct Node* delete_from_end(struct Node * head)
{
    struct Node * ptr_slow= head;
    struct Node * ptr_fast= head->next;

    while(ptr_fast->next != NULL)
    {
        ptr_fast= ptr_fast->next;
        ptr_slow= ptr_slow->next;
    }

    ptr_slow ->next=NULL;
    free(ptr_fast);
    return head;
    

}


struct Node* delete_from_index(struct Node * head,int index)
{
    struct Node * ptr_slow= head;
    struct Node * ptr_fast= head->next;
    int i=0;
    while(i != index-1) 
    {
        ptr_fast= ptr_fast->next; 
        //this moves one step ahead of slow so it will reach the index first and hence we free this

        ptr_slow= ptr_slow->next;
        i++;
    }

    ptr_slow ->next = ptr_fast->next;
    free(ptr_fast);
    
    return head;
    
}

struct Node* delete_from_value(struct Node * head,int val)
{
    struct Node * ptr_slow= head;
    struct Node * ptr_fast= head->next;
    // int i=0;
    while(ptr_fast->data != val) 
    {
        ptr_fast= ptr_fast->next; 
        //this moves one step ahead of slow so it will reach the index first and hence we free this

        ptr_slow= ptr_slow->next;
        // i++;
    }

    ptr_slow ->next = ptr_fast->next;
    free(ptr_fast);
    
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
    fourth->next=NULL;
    printf("linked list before deletion : \n");
    printList(head);

    // deletion phase:

    // head = delete_first(head);
    // head = delete_from_end(head);
    head = delete_from_index(head,0);
    // head = delete_from_value(head,2);



    printf("linked list after deletion : \n");
    printList(head);

    return 0;

}

