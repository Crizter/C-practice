// CHECK  IF THE DIGIT IS BEING REPEATED IN A NUMBER. //

#include <stdio.h>
int main()
{
    int N , seen[10] =  {0};
        printf("enter the number to be checked ");
        scanf("%d",&N);


int rem ;

    while(N>0){
        rem = N%10;
        if(seen[rem] == 1)
        break ;
        seen[rem] = 1;
        N = N/10;
    }
    if(N>0)
    printf("Yes");
 
    else 
    printf("No");
    
    return 0 ; 
} 







