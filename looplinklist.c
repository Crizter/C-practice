#include <stdio.h>
#include <stdlib.h>

struct node {
    int data ;
    struct node *next ;
} ;
void createlist(struct node *head);
void displaylist(struct node *head);

void  looplist(struct node *head);// checks the loop
 void looping(struct node *head);// looops the node 
int main(){
   struct node *first , *second  ;
    first  = (struct node *)malloc(sizeof(struct node));
   createlist(first);
  looping(first);
  looplist(first);
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



//Floyd Cycle finding alogrithm ( don't remove this comment )


void looplist(struct node *head){
 struct node *slow , *fast;
 slow = fast = head;
do{
 slow = slow->next;
 fast = fast->next;
 fast = fast?fast->next:fast;
}
while(slow && fast && slow != fast);

if(slow == fast ) {
  printf("loop exist");

}
else {
  printf("no loop ");

}


}
//\/[
  
  // creting a  loop in linked list 
  void looping(struct node *head){
    int x ;
     struct node *p , *q;
 q = head;
 p =  head ;
    printf("enter the node position to loop the node\n");
    scanf("%d",&x );

    // finding the count of the node //
  int count = 1 ;
  while(count<x &&   p != NULL)
   { p= p->next;
    count ++ ;
   }

   if(p == NULL){
    printf("entered position exceeds the length");
    return ;
   }
   while(q->next != NULL ){
    q = q->next ;
   }
   q->next = p;

   printf("loop created at pos %d \n",x );

  }


