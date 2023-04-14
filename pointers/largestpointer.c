#include <stdio.h>
#include <stdlib.h>
int main(){
    int i , n , *ele ;
    printf("enter number of elements :  ");
    scanf("%d",&n);

    ele = (int *)calloc(n , sizeof(int));
    for(i=0;i<n;++i){
        printf("enter ele %d \t " , i+1);
        scanf("%d",ele +i);
    }
    if(ele==NULL){
        printf("memory not allocated ");
    }
    for(i=1;i<n;++i){
        if(*ele < *(ele +i)){
            *ele = *(ele +i);
        }
        
    }
    printf("%d is the largest \n",*ele);

    return 0;

}
