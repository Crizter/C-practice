#include <stdio.h>
int main()
{
    int i , n  , j; 
    printf("How many rows do you want in your pyramid");
    scanf("%d",&n);         // let the number of rows be 10

    for(i = 0; i<n;i++){   // then i will print till 10 rows , remember i is starting from 0 .
       
        for(j=0;j<2*n-1 ; j++) // loop starts column = 0 , column is less than 1, 
        { //
            
            if(j>=n-(i-1) && j<=n+(i-1))
            {printf("F");}
        
         else
         printf(" ");
       
       
        }printf("\n");

    } 
    return 0 ; 
}
