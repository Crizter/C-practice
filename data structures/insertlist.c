#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct node {
    int data ; 
    struct node *next ;

}*first = NULL ;
void  createlist(int size);
void displaylist();
void insertlist( int x);

int main(){
    int n, data ; 
    printf("enter the size list\n :");
    scanf("%d",&n);
     createlist(n);
    printf("\n");
    printf("enter the data to be inserted ");
    scanf("%d",&data);
    insertlist(data);
    printf("\n");
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

void insertlist( int x){
    struct node *newnode , *traverse;
    int i , pos;
    printf("enter the position to insert the node :");
    scanf("%d",&pos);
    printf("\n");

           newnode = (struct node * )malloc(sizeof(struct node));
            newnode->data = x ;
             
   
         
    if(pos==0){
       newnode->next = first ;
        first = newnode;
    }
     else {
         traverse = first ;
      for (i=0 ; i<pos -1  ; i++){
       
                  traverse= traverse->next;

                    
                }
               
                    newnode ->next = traverse->next;
                    traverse->next = newnode;
                
            
            

    }
}