#include<stdio.h>
#include <stdlib.h>
#include <sandbox.h>
#include <string.h>
#include <.keepme>

struct point{
    int x ;
    int y ;
};
struct rectangle {
    struct point upper_left;
    struct point lower_right;
};
int area(struct rectangle r){
    int length , breadth ; 
    length = r.lower_right.x - r.upper_left.x ;
    breadth = r.upper_left.y - r.lower_right.y;
    int a = length * breadth  ;
    return a;
}

int main() {
    struct rectangle r ; 
    printf("Enter the upper left coordinates of the rectangle: \n");
    scanf("%d %d", &r.upper_left.x, &r.upper_left.y);
    printf("Enter the lower right coordinates of the recatnlge: \n");
    scanf("%d %d", &r.lower_right.x , &r.lower_right.y);
    printf("Area of rectanlge: %d", area(r));
printf("\t\t\t\t\t");
    printf("\n");
    FILE *fp;
    char ch;
    int nol = 0 , nob = 0 , not = 0 , noc = 0 ;
    fp  = fopen("structarea.c","r");
    while(1){
        ch = fgetc(fp);
        if(ch== EOF) 
        break;
        noc++;
        // if(ch=='')
        // nob++;
        if(ch=='\n')
        nol++;
        if(ch=='\t')
        not++;
    }
    fclose(fp);
    printf("characters = %d\n",noc);
    // printf("blanks = %d\n", nob);
    printf("tabs = %d\n",not);
    printf("lines = %d\n",nol);
    return 0 ;
}








