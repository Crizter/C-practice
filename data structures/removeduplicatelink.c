#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct node {
    int data;
    struct node  *next ;

}*first = NULL ;

 
void createlist(int size);
void displaylist();
int sortlist();
void deletelist();


// main function 
int main(){
    int size ;
    printf("enter the size of list:");
    scanf("%d",&size);

    createlist(size);
    displaylist();
    // sortlist();
    printf("\n\n");
    deletelist();
    displaylist();

    return 0 ; 

}
void createlist(int size){
    int x, i  ; 

    struct node *newnode , *traverse;
    first = (struct node *)malloc(sizeof(struct node));
    if(first== NULL){
        printf("memory not allocated ");

    }

    else{
        // taking the input of the list //
        printf("enter the data of node 1 : ");
        scanf("%d",&x);
        first->data = x;
    first->next = NULL;
    }

    if(first == NULL){
        printf("data not entered");
        exit(0);
    }
    traverse = first;
    for(i=2 ;i<=size;i++){

        newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("memory not allocated ");
        
    }

        printf("enter the data of node %d ",i);
        scanf("%d",&x);
        newnode->data  = x;
        newnode->next = NULL;

    traverse->next  = newnode;
    traverse = traverse->next;

    }
}

void displaylist(){
    struct node *move ;
    move= first;
    while(move!=NULL){
        printf("%d-> ",move->data);
        move = move->next;

    }
}

//sorting out the list //

int sortlist(){
    int x  = INT_MIN;
    struct node *p;
    p = first ;
while(p!=NULL){
    
    if(p->data <x){
         return 0 ; 
    }
       x=  p->data;
        p  = p->next;

}
return 1;



}
void deletelist(){
    struct node *p , *q ;
    p = first;
    q= first->next ;
    while(q!=NULL){
        if(p->data!= q->data){
            p = q;
            q = q->next;
    
        }
        else{
            p->next = q->next ;
            free(q);
            q = p->next ;


        }
    }
}
