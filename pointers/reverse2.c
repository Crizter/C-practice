
#include <stdio.h>

#include <stdlib.h>

int main(){
int i  ,size ;
printf("enter the size of array  :");
scanf("%d",&size);

int a[size];
int *p ;
p =  &a[size-1];

for(i=0;i<size;i++){
    printf("element %d ",i);
    scanf("%d",&a[i]);
}
for(i=0;i<size;i++){
    printf("%d\t", *p);
    p--;
}


return 0;

}
