 #include <stdio.h>
 #include <limits.h>

 int main(){
    int min= INT_MIN , min2 = INT_MIN;
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
        
     
// logic for  smallest element//

for(i=0;i<n;i++){
if(min < array[i]){
    min = array[i];
}
}

// logic for second smallest element // 
for(i=0;i<n;i++){
   if(array[i]>min2 && array[i]!=min){
        min2 = array[i];
    }
}

printf("%d",min2);

 return 0 ;
 }
