// Check whether the triangle is equilateral, scalene, or isosceles

#include<stdio.h>
#include<string.h>
int main()
{
int side1 , side2 , side3 ;
               printf("enter sides of triangle: ");
               scanf("%d%d%d",&side1,&side2,&side3);
        if( side1==side2  && side2 == side3){
                    printf("the triangle is equilateral\n");
                }
                        else if((side1==side2 ) || (side1 == side3) || (side2==side3)){
                            printf("The triangle is isosceles\n");
                        }
                        else 
                        printf("Triangle is scalene\n");

        
        return 0 ;
}


    