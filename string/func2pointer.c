// to print the sum using pointer //
#include <stdio.h>
int main() {
    int row , col, n  , i ,j;
    printf(" number of rows\n");
    scanf("%d",&row);
    printf( "number of col:");
    scanf("%d ",&col);

int matrix[row][col];
 
    for( i= 0; i<row;i++)
    { for(j = 0 ; j < col ; j++){
        printf("matrix is\n ");
        scanf("%d ",&matrix[i][j]);
    }
    printf("\n");
    } 

printf("\n");
    for( i= 0; i<row;i++)
    { 
        for(j = 0 ; j < col ; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}
