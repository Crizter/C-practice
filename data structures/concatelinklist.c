// creating function to create two separate linked lists .//

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data ; 
    struct node *next ; 

};
void createlist(struct node **head); // using double pointer to make multiple lists 
void displaylist(struct node **head); // same to display list
void concate(struct node *list1 , struct node *list2);// passing the two lists to merge them
int main(){
    struct node *first  = NULL, *second=NULL ;

createlist(&first);
createlist(&second);
displaylist(&first);
printf("\n");
displaylist(&second);
printf("\n");
concate(first , second);
displaylist(&first);

return 0 ; 

}
// instead of global variable we are using the pointer now //


void createlist(struct node **head  ){ 
 int i, size , data;
 printf("enter the size of the node ");
 scanf("%d",&size);

struct node *newnode , *traverse ; // rest of the procedure is same as used for single linked list//

*head = (struct node *)malloc(sizeof (struct node ));
// checking the memory allocation
if(*head  == NULL){
 printf("memory not allocated ");
 return  ;
}

printf("enter the data of node 1 ");
scanf("%d",&data);
// use () before -> as preference of -> is more higher than * 
// as a result without braces it will become *(head->next) = NULL which is 
// not needed .

(*head)->data  = data ;
(*head)->next  = NULL;
traverse = *head ;  // passing the address of first node here.
for(i=2;i<=size;i++){

    newnode = (struct node *)malloc(sizeof(struct node));
if(newnode ==NULL){
    printf("memory not allocated ");
    break;
}
    printf("enter the data of node %d ",i);
    scanf("%d",&data);
   newnode->data = data;
    newnode->next = NULL;

if(*head == NULL){   // *head is stored the address of **head//
    *head = newnode ;
    traverse = *head;
}
else{
    traverse->next = newnode ;
    traverse = traverse->next ;
}

}

}

void displaylist(struct node **head ){
    struct node *move ; 
    move= (*head);
    while(move!=NULL){
        printf("%d ",move->data);
        move= move->next ;

    }

}

void concate(struct node *list1 , struct node *list2){
struct node *p  = NULL;// using the third pointer to track the node 1 end 
//then link to the second node .


if(list1==NULL){
    printf("memory not allocated ");
    list1 = list2;
    return ;
}
p = list1;  // third pointer p is pointing to the first node here.
while(p->next !=NULL){  // traverse till you find the null point of first node //
    p = p->next ; // p keeps moving till null

}
p->next = list2 ; // as soon as p is at end of the null of first node 
// link the head of second node to first node .
}
