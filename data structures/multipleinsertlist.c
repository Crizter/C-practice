// creating function to create two separate linked lists .//

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data ; 
    struct node *next ; 

};
void createlist(struct node **head);
void displaylist(struct node **head);
int main(){
    struct node *first  = NULL, *second=NULL ;

createlist(&first);
createlist(&second);
displaylist(&first);
printf("\n");
displaylist(&second);


return 0 ; 

}


void createlist(struct node **head  ){
 int i, size , data;
 printf("enter the size of the node ");
 scanf("%d",&size);

struct node *newnode , *traverse ;

*head = (struct node *)malloc(sizeof (struct node ));
if(*head  == NULL){
 printf("memory not allocated ");
 return  ;
}

printf("enter the data of node 1 ");
scanf("%d",&data);

(*head)->data  = data ;
(*head)->next  = NULL;
traverse = *head ;
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

if(*head == NULL){
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
