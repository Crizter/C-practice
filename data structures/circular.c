#include <stdio.h>
#include <stdlib.h>

struct node {
    int data ;
    struct node *next ;
} ;
void createlist(struct node *head);
void displaylist(struct node *head);
void circularlist(struct node *head);
void displaycircular(struct node *head);

int main(){
   struct node *first , *second  ;
    first  = (struct node *)malloc(sizeof(struct node));
   createlist(first);

  circularlist(first);
  displaycircular(first);
return 0 ;
}

void createlist(struct node *head ){
    int size ;

    struct node *newnode  , *traverse;
    int x;
    printf("enter the size of the node ");
    scanf("%d",&size );

    printf("data 1 ");
    scanf("%d",&x);
  head->data = x;
  head->next = NULL;
  if(head == NULL){
    printf("no data ");
    return ;
  }
    int i ;
    traverse = head;

    for(i=2;i<=size;i++){
        newnode = (struct node * )malloc(sizeof(struct node));
        printf("data %d \n",i);
        scanf("%d",&x);
        newnode->data = x ;
        newnode->next = NULL;
        traverse->next = newnode;
        traverse= traverse->next ;
        
    }
}

void displaylist(struct node *head ){
  struct node *traverse = head;
  while(traverse!=NULL){
    printf("%d\t",traverse->data);
    traverse = traverse->next ;

  }
}







void circularlist(struct node *head){
struct node *p ;
p = head ;
if(head == NULL ){
  printf("Error:node is empty");
  return ;

}
while(p->next != NULL){
  p = p->next ;

}
p->next = head;

}

 

void displaycircular(struct node *head) {
    struct node *current = head;

    if (head == NULL) {
        printf("List is empty");
        return;
    }

    printf("Nodes of the circular linked list: \n");
    do {
        printf("%d ", current->data);
        current = current->next;
    } while (current != head);

    printf("\n");
}
