#include <stdio.h>

int main(){
    int i , j,size ;
    printf("enter size of square matrix :");
    scanf("%d",&size);

  int a[size][size];


printf("\n");

    // taking input of 3*3 array // 

    for(i = 0 ; i<size;i++){
        for(j=0;j<size;j++){
            printf("enter element ele[%d][%d]\n", i,j);
            scanf("%d",&a[i][j]);

        }
    }
    // to print 3*3 in matrix form // 
    for(i= 0; i<size;i++){
        for(j=0;j<size;j++){
            printf("%d\t",a[i][j]);

        }printf("\n");
    }
}
