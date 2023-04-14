// Write a program in C to store n elements in an array and print the elements using a pointer.
#include <stdio.h>
#include <stdlib.h>
void print(int *p, int len);

int main(){

int i , n ;
printf("enter the size of array : " ) ;
scanf("%d",&n);

int a[n];
for(i=0;i<n;i++){
    printf("element %d\t : ",i);
    scanf("%d",&a[i]);
    printf("\n");
    
}
print(&a[0],n);

    return 0;
}

void print(int *p, int len){
  int i ;
  for(i=0 ;i<len;i++){
    printf("%d\n",*p);
    p++;

  }
}


    
  



     


