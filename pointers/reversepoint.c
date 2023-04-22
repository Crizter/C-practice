// Write a program in C to print the elements of an array in reverse order.

#include <stab.h>
#include <stdio.h>
#include <stdlib.h>
int main(){

    int *p , size , i ;
    

    printf("enter the size of elements :\n ");
    scanf("%d",&size);

    p = (int * )malloc(size * sizeof(int)); // giving the size to entire array //

    for(i=1;i<=size;i++){
        printf("\nelement %d ", i);
        scanf("%d",p+i);

    }
    // printing in reverse order //

    for(i=size ;i>0;i--){
        printf("%d\t",*(p+i));
    }

}
