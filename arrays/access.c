// HOW TO ACCESS THE ARRAYS //

#include <stdio.h>


int main()
{
    int i ,N;
       
    printf("Enter the value of array required :\n");
    scanf("%d",&N);
    
      int  a[N];

        
       for(i=0;i<N;i++){
            printf("Enter the value for index %d: ",i);
            scanf("%d",&a[i]);
                        }
/*to print elements */  printf("\n Array elements are as follows \t\n");
                        for(i=0;i<N;i++){
                            printf("%d\t",a[i]);
                        }
 return 0 ; 
                }
