#include <stdio.h>
int main(){

      int n , i ,j ;
    printf("enter array size :"); // entering array size
    scanf("%d",&n);
int a[n] , b[n] ;
    for(i=0;i<n;i++){
    printf("enter elements in array :\n");// entering elements in array //
    scanf("%d",&a[i]);
    }
// copy elements in 2nd array
for(i=0;i<n;i++){
    b[i]=a[i];
}
int temp = 0 ;

  // sorting array elements in ascending order //

  // logic 
    for(i=0;i<n;i++){
        for(j=i+1 ;j<n;j++){
            if(a[i]< a[j]){ // changing the sign will result in opposite of ascend.
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            }
           
    }

    }
for(i=0 ; i < n  ; i++){
    printf("%d\t",a[i]);
}

    return 0 ;
}
