// WAP TO REVERSE THE GIVEN ARRAY OR NUMBER YOU CAN SAY. //


#include <stdio.h>
int main()
{
    int i, n=9, a[n];
for(i=0;i<9;i++){
    printf("Enter the value :\n");
    scanf("%d", &a[i]);
}
printf("\n\n");

//to reverse the order we have to decrement each term and also to terminate the process instead of 
// being lesser than 9 it should be greater than 0.
printf("The reversal order of array :\n");

for(i=8;i>=0;i--){
    printf(" %d\t",a[i]);
}
return 0 ; 
}