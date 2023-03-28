// #include <stdio.h>
// void f(int *p ,int *q)
// {
//     p = q;
//     *p = 2;
// }

// int main(){
//   int i = 0, j = 1;
// f(&i,&j);
// printf("%d%d",i , j);
// return 0 ; 

// }


#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0 ;
    i++;    // error 
 
    if(i<=5){
        printf("C \n");
        exit(0);
        main();
    }
    return 0 ;

}
