#include <stdio.h>
#include <stdlib.h>
#define N 5

typedef struct stack{
        int n;
        float vet[N];
        }Stack;

Stack *create_stack(){
      Stack *p=(Stack*)malloc(sizeof(Stack));
      p->n=0;
      return p;
}
int stack_empty(Stack *p){
    if(p->n==0)
        return 1;
    else
        return 0;
}
void stack_push(Stack *p, float v) {
    if(p->n==N){
      printf("Stack is full.\n");

      return;
      }

      p->vet[p->n]=v;
      p->n++;
}
float stack_pop(Stack *p){
     float v;
     if(stack_empty(p)){
         printf("Stack empty.\n");
         exit (1);

     }    //retira o elemento da stack
     v=p->vet[p->n-1];
     p->n--;
     return v;
}
void stack_libera(Stack *p){
     free(p);
}
//-------------------------------
void mostra_stack(Stack *p) {
     printf("Stack Content\n");
     for(int i=p->n-1;i>=0;i--)
         printf("%0.f\n",p->vet[i]);
     printf("\n");
}
//--------------------------------------
void menu(){
     system("cls");
     printf("Menu: \n");
     printf("1. Add Element (push)\n");
     printf("2. Remove Element(pop)\n");
     printf("3. Show stack\n");
     printf("4. Exit\n");
}
main(){
      Stack *pi=create_stack();
      int opmenu;
      float item;
      do{
         menu();
         scanf("%d", &opmenu);
         switch (opmenu) {
         case 1 :
                printf("Insert a value to push to the stack: ");
                scanf("%f", &item);
                stack_push(pi,item);
                break;
         case 2 :
                  if(stack_empty(pi))
                      printf("Stack empty.\n");
                  else
                      printf("Element removed = %.0f\n",
                        stack_pop(pi));
                break;
        case 3 :
                mostra_stack(pi);
                break;
       }  //switch
       printf("\n");
       system("pause");
     } while(opmenu!=4);

   }
