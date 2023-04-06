#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
struct node{
int data ; 
struct node *next ;

}*first= NULL;

void createList(int A[],int n);
void display(struct node *p);
void RDisplay(struct node *p);
int  count(struct node *p);
int   max(struct node *p);
struct node *search(struct node *p , int key);
struct node *Lsearch(struct node *p, int key);
void insert(int pos , int x ) ;

int main(){
    int A[] = { 0, 3 ,4 ,5 , 6 ,7};
    createList(A,6);
    display(first);

    printf("\n");

   
  

}

// the functions starts from here.
void createList(int A[],int n){
    int i ;
    struct node *t , *last ;
    first = (struct node * ) malloc(sizeof(struct node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i=1;i<n;i++){
        t= (struct node *)malloc(sizeof(struct node));
        t->data = A[i];
        t->next = NULL;
        last -> next = t;
        last = t;
    }
}
// display function for linked list
void display(struct node *p){
    while(p!=NULL)
    {
        printf("%d\t",p->data);
        p=p->next ; 
    }
}
 // recursive display for  linked list
void RDisplay(struct node *p){
    if(p!=NULL){
                RDisplay(p->next);
        printf("%d\t",p->data);

    }
}
// to find the length of list //
int count(struct node *p){
    int c = 0 ; 
    while(p!=NULL){
        c++ ;
        p= p->next;
    }
    return c ;
}
// to find the sum of numbers in linked list
int sumList(struct node *p){
 int sum = 0 ; 
    while(p!=NULL){
    sum = sum + p->data;
    p  = p->next;
}
return sum ;
}
 // to find the maxmium number in linked list//
int max(struct node *p){
    int i = INT_MIN;
    while(p!=NULL){
        if(p->data>=i){
        i=p->data;
        p= p->next;
        }

    }
    return i;
}
// creating search function for list//

struct node *search(struct node *p, int key){
    while(p!=NULL){
        if(key==p->data){
            return (p) ;
            p = p->next;
          }
 

    }
}
//creating improved linear search //
struct node *Lsearch(struct node *p, int key){
    struct node *q = NULL;
    while(p!=NULL){
        if(p->data == key){
            q->next=p->next;
            p->next=first;
            first = p;
            return p;
        }q=p;
        p=p->next;
    }
    return NULL;
}

// creating function to insert a node 

void insert(int pos , int x ){
int i ; 
 struct node *t , *p;   
    if(pos==0){
        t->data = x ; 
        t->next =first ;
        first = t ;
    }

    else if(pos>0){
 
      p = first ;
    for(i = 0 ; i < pos-1 ; i++){
        p = p->next ; 
        if(p!= NULL){
        t = (struct node *)malloc(sizeof(struct node));
        t->data = x ;
        t->next = p->next ;
        p->next  =  t;
        }
    }
    }
}