#include <stdio.h>
int main(){
    int i ,j,   n;
    printf("enter the no of elements\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter the elements in array: \n");
    for(i=1;i<=n;i++){
        printf("\n");
        scanf("%d",&a[i]);

    }

    // to duplicate the elements//
    for(i=1;i<=n;i++){
        b[i]= a[i];

    }
    for(i=1;i<=n;i++){
        printf("%d\n",b[i]);

    }

return 0 ;

}