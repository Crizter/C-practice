#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p ,  size, sum =0 ;
    printf("enter the size of array : ");
    scanf("%d",&size);

    int a[size],i;
    printf("\ntaking the elements in array \n");
    
    for(i=0;i<size;i++){
        printf("ele %d \n",i);
        scanf("%d",&a[i]);
    }
                    // to add all the elements using pointers in array  //
 p = (int *)malloc(sizeof(int));


for(i=0;i<size;i++){
     *(p+i)=   a[i]  ;         //copying the elements of array // 
}

for(i=0;i<size;i++){
sum  = sum + *(p+i);
  *p = *(p+i);
}

    printf("%d",sum);

free(p);
}
