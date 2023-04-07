#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct node {
    int data ; 
    struct node *next ;

}*first = NULL ;
void  createlist(int size);
void displaylist();


void  deletelist();
int count();


int main(){
    int n, data ; 
    printf("enter the size list\n :");
    scanf("%d",&n);
     createlist(n);
    printf("\n");
    // printf("enter the data to be inserted ");
    // scanf("%d",&data);
    // insertlist(data);
    printf("\n");
    // sortlist();
    // deletelist();
     displaylist();
printf("\n");
deletelist();
displaylist();
    return 0 ;

}

void createlist(int size)
{
    first = (struct node *)malloc(sizeof(struct node));
    struct node *newnode , *temp;
    int i , data ;
    if(first == NULL){
        printf("linked list is not created \n");

    }
    printf("enter the data of the node ");
scanf("%d",&data);
first->data = data;
first->next  = NULL;
temp  = first ;
for(i=2;i<=size;i++){
    newnode = (struct node *)malloc(sizeof(struct node));
if(newnode==NULL){
    printf("memory not allocated");
    break;              

}
else{
    printf("\nnode %d ",i);
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=NULL;
    temp->next = newnode;

    temp = temp->next ;

      }
    }

}
void displaylist(){
    struct node *move;
    if(first == NULL){
        printf("empty list");

    }
    else{
        move = first ;
        while(move!=NULL){
            printf("%d->",move->data);
            move=move->next;

        }
    }
}
int count (){
    int n = 0;
    struct node *temp;
    temp = first;
    while(temp!=NULL){
      temp = temp->next;
        n++;
    }
    return n;
}

void deletelist(){
    struct node *temp , *current;
    // temp = (struct node *)malloc(sizeof(struct node));
    int pos, i ;
    printf("enter the position of node to be deleted");
    scanf("%d",&pos);
    if(pos == 1){
    temp = first;
    first = first->next ;
 free(temp );

    }
    if(pos>1 && pos <count()){
        current = first;
  for(i=0 ; i<pos-1 ; i++){
    
    temp = current;
     current = current->next;

  }
  temp->next = current->next;
  free(current);

    }
}