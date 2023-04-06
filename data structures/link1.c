#include <stdio.h>
#include <stdlib.h>

struct node {
    int data ;
    struct node *next ;

}*first ;

void createlist(int size){

    int i, data;
    first = (struct node *)malloc(sizeof(struct node));
    struct node *newnode , *temp;
    printf("Enter the data for node 1 :");
    scanf("%d",&data);
    first->data = data;
    first->next = NULL;

    if(first==NULL){
        printf("memory not allocated");
        exit(0);
    }
    temp = first ;

for(i=2 ;i<=size-1;i++){
        newnode=malloc(sizeof(struct node));
        // if memory is not allocated to newnode then//
        if(newnode == NULL)
        {
            printf("memory not allocated to newnode");
        }
        printf("enter the data of node %d\n",i);
        scanf("%d",&data);

        newnode->data = data ;
        newnode->next = NULL;
        
        temp->next = newnode;// link to previous node 
        temp= temp->next ;// make current node as previous node //
    // }
    }
}

void traverselist(){
    struct node *move ;
    if(first == NULL){
        printf("Memory not allocated ");
    }
move = first ;
while(move!=NULL){

        printf("%d\t",move->data);
        move = move->next ;
    }
}
int count (struct node *p){
    int l = 0;
    p = first ;
while(p!=NULL){
    l++;
    p = p->next ; 
}
return l;
}

void insertlist(struct node *p, int index , int x ){
    struct node *t ;
    int i;
    if(index <0 || index > count(p))
    return ;
    t= (struct node *)malloc(sizeof(struct node ));
    t->data = x ;
    if(index == 0){
        t->next = first ;
        first = t ;
    }
    else {
        for(i=0;i<index; i++){
            p = p->next ;
            t->next = p->next ;
            p->next = t;

        }
    }

}

int main(){
    int size , pos ,key;
    printf("enter the number of nodes :\n");
    scanf("%d",&size);
    
    createlist(size);
    printf("Enter the position to insert the node :");
    scanf("%d",&pos);
    printf("\n enter the data in the node ");
    scanf("%d",&key);
    insertlist(first, pos ,key);
    traverselist();

    return 0;
}