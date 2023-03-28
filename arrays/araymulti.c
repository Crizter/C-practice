#include <stdio.h>
int main()
{
    int i , j, k  ;
    int arows, bcol ;
   int row1, col1, row2, col2;


    printf("Welcome to matrix multiplication program:\n");
    printf("Enter the number of rows of matrix 1:\n");
    scanf("%d",&row1);
    printf("Enter the number of columns for matrix 1:\n");
    scanf("%d",&col1);
    printf("Enter the value of number of row of matrix 2:\n");
    scanf("%d",&row2);
    printf("Enter the value of number of column of matrix 2:\n");
    scanf("%d",&col2);

// Checkingif matrices can be multiplied or not //
    if(col1 != row2){
        printf("Sorry we cannot multiply the matrices a and b :");
    }
    else {
        printf("Enter the elements of matrix b : \n");
    }



    // entering the value of matrices 

  
int matrix1[row1][col1] , matrix2[row2][col2];

//entering for matrix 1:
printf("Entering the value of matrix 1");
for(i=0;i<row1;i++){
    for(j=0;j<col1;j++){
        printf("Enter the value of ele[%d][%d]:\t ",i,j);
        scanf("%d", &matrix1[i][j]);
    }printf("\n");
}
printf("\n");
printf("Entering the value of matirx 2");
// entering for matrix 2 :
for(i=0;i<row2;i++){
    for(j=0;j<col2;j++){
        printf("Enter the value of element[%d][%d]: \t",i,j);
        scanf("%d" , &matrix2[i][j]);
    }printf("\n");
}



// printing the values of matrix  1
for ( i = 0; i < row1; i++)

{
  for ( j = 0; j <col1; j++)
  {
        printf("%d\t", matrix1[i][j]);    /* code */
  }printf("\n");
    

}
printf("\n\n");

for(i=0;i<row2;i++){
    for(j=0;j<col2;j++){
        printf("%d\t", matrix2[i][j]);
    } printf("\n");
    }
// TILL HERE CODE IS WORKING FINE DON'T FUCKING TOUCH FROM HERE.

//to start multiplication code from here . 
int sum, MAX, product[MAX][MAX];
printf("\n\n");
printf("Resultant matrix \n");
for(i=0;i<row1;i++){
    for(j=0;j<col2;j++){
    for (k=0;k<row2;k++){
    sum +=matrix1[i][j] * matrix2[i][j];
    }
    product[i][j] = sum;
    sum =0;}

}
//PRINTING THE RESULTANT MATRIX //
printf("RESULTANT MATRIX ");

    for(i=0; i<row1;i++){
        for(j=0;j<col2;j++){
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }




    
     return 0 ; 
    }