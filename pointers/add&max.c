// adding two pointers using call by reference //

#include <stdio.h>
#include <stdlib.h>
int add(int *  , int * );
void max(int * , int *);
int main(){
int a , b;
printf("enter the numbers ");
scanf("%d%d",&a,&b);
   int y =add(&a,&b);
  printf("%d\n",y);
   max(&a,&b);


    return 0  ;
}
int add(int *x , int *y ) {
    int sum ;
    sum = *x + *y;

    return sum;

    


}

void max(int *x , int *y){
    if(*x > *y){
        printf("%d is max ",*x);

    }
    else
    printf("%d is max ",*y);

    
}
