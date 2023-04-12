#include <stdio.h>

int main(){
    int i , j,size ,k,arraylimit;
    printf("enter size of square matrix :");
    scanf("%d",&size);
   

  int a[size][size], b[size][size];


printf("\n");

    // taking input of 3*3 array // 
//array 1 //
printf("enter elements of array 1 : \n");
    for(i = 0 ; i<size;i++){
        for(j=0;j<size;j++){
            printf("enter element ele[%d][%d]\n", i,j);
            scanf("%d",&a[i][j]);

        }
    }
    printf("enter elements of array 2 :\n");
        for(i = 0 ; i<size;i++){
        for(j=0;j<size;j++){
            printf("enter element ele[%d][%d]\n", i,j);
            scanf("%d",&b[i][j]);

        }
    }
    printf("\n");

int c[size][size];

// adding two arrays 
for(i=0;i<size;i++){
    for(j=0;j<size;j++){
        c[i][j]= a[i][j]+b[i][j];
    }
}

 
    for(i= 0; i<size;i++){
        for(j=0;j<size;j++){
            printf("%d\t",c[i][j]);

        }printf("\n");
    }
}
