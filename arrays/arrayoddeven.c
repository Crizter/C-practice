#include <stdio.h>
int main(){

      int n , i ;
    printf("enter array size :"); // entering array size
    scanf("%d",&n);
int a[n];
    for(i=0;i<n;i++){
    printf("enter elements in array :\n");// entering elements in array //
    scanf("%d",&a[i]);
    }


    //printing elements //

for(i=0;i<n;i++){
    if(a[i]%2 == 0 ){
        printf("%d is even element  \n", a[i]);

    }
    else 
    printf("%d is odd element \n", a[i]);

}


    return 0 ;
}
