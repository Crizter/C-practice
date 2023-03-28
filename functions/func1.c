// Write a C program to compute the perimeter
//  and area of a rectangle with a height of 7 inches,
// and width of 5 inches.

#include <stdio.h>
#include <stdlib.h>

int areaRect(int l , int b )
{
    int area ;
    area  = l * b;
    return area;
}
int permieterRect(int l, int b )
{
    int perimeter ;
    perimeter = (2*l) + (2*b) ;
    return perimeter ;
}                               

int main()
{
    int h , w ;
    printf("Enter the value of length :\n");
    scanf("%d",&h);
    printf("Enter the value of breadth :\n");
    scanf("%d",&w);

int area = areaRect(h,w);
int perimeter = permieterRect(h,w);
printf("The area is: %d\n",area);
printf("The perimter is %d\n",perimeter);

return 0 ; 
}

