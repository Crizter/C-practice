 #include <stdio.h>
 #include <limits.h>

 int main(){
    int min= INT_MAX , min2 = INT_MAX;
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
if(min > array[i]){
    min = array[i];
}
}

// logic for second smallest element // 
for(i=0;i<n;i++){
   if(array[i]<min2 && array[i]!=min){
        min2 = array[i];
    }
}


int option;
printf("choose option to print smalles or second smallest element : ");
scanf("%d",&option);

switch(option){
case 1 : printf("smallest element %d",min);
break;
case 2 : printf("second smallest element %d",min2);
break;
}
 return 0 ;
 }
