 #include <stdio.h>
 int main(){
            int n , i ;
    printf("enter array size:\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements \n");
    for (i = 0; i < n; i++)
        { 
            printf("element %d\n",i);
            scanf("%d", &array[i]);


        }
        int pos;
    printf("\nenter position to delete from array:");
    scanf("%d",&pos);

    for(i=pos -1 ; i<n-1 ;i++){
        array[i]= array[i+1];
    }
    for(i=0;i<n-1;i++){
        printf("%d\t",array[i]);

    }
  
 return 0 ;
 }
