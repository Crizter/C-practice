#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct node {
    int data;
    struct node  *next ;

}*first = NULL ;

 
void createlist(int size);
void displaylist();
int count();

void reverse1();// reversing using array//
void reverse2();// reversing using pointers

// main function 
int main(){
    int size ;
    printf("enter the size of list:");
    scanf("%d",&size);

    createlist(size);
    displaylist();

    printf("\n\n");


reverse2();

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




int count(){
    struct node *p;
    p = first ;
    int count = 0 ; 
while(p != NULL){
    count++;
    p = p->next;

}
return count ;
}
// using array //

void reverse1(){
    struct node *p ;
    int x  = count();
     int i = 0 , a[x]; 
       p  = first;
     while(p!=NULL){
        a[i]= p->data;
     
      p = p->next; 
      i++;
      }
 p = first;
i--;

    // filling in reverse 
    while(p!=NULL){
     p->data = a[i];
     p = p->next;
     i--;
    }
    displaylist();
    

}
//reversing using pointers// 
void reverse2(){
struct node *p , *q , *r;
p = first;
q = NULL;
r = NULL;

while(p!=NULL){
r = q ;
q = p ;
p = p->next;
q->next = r;
}
first = q ;
displaylist();
}
