#include <stdio.h>
struct abc {
    int x;
    float y;  char z[10] ;
};
int main(){
    struct abc a = {.x=23 ,.y = 32.3 ,.z = "string" }; //array intialized desingately// 
     
    printf("%d %f %s ", a.x,a.y,a.z);
    return 0 ;}