// WRITE A PROGRAM THAT READS A 5*5 ARRAY OF INTEGERS AND THEN PRINTS THE ROW SUM AND THE COLUMN SUM;

#include  <stdio.h>
int main(){

    int i , j , k , l  , m;
    int arr[5][5];

    
    printf("Make a 5*5 matrix ");
    printf("\n");

    for(i=0;i<5;i++){
        printf("\n");
        for(j=0;j<5;j++){
            printf("Enter the value of element:");
            scanf("%d",&arr[i][j]);
        }printf("\n");
    }
    printf("\n The matrix is \n");


    for(i=0;i<5;i++){
        printf("\n");
        for(j=0;j<5;j++){
            printf("%d\t",arr[i][j]);
        }printf("\n\n");
    }
    
int sum;
    printf("\n Column total : ");
    for(j=0;j<5;j++){
        for(i=0;i<5;i++){
            sum += arr[i][j];

        }printf("%d",sum);
sum = 0;
    }
    printf("\n Row total :");
     for(i=0;i<5;i++){
        for(j=0;j<5;j++){
        sum += arr[i][j];}
         }printf("%d",sum);
        sum = 0;

return 0 ; 
}
