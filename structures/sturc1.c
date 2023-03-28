#include <stdio.h>
#include <string.h>

    struct Car{
        int id ;
        char Name[50] ;
        float Price;
    };
    int main(){
        struct Car car1, car2;
        car1.id = 1011;
      strcpy(car1.Name, "Benz");
        car1.Price = 1.92;
         
         car2.id = 1022;
         strcpy(car2.Name,"Audi");
         
         car2.Price= 1.1;
    printf("Car 1 detail  s= %d %s %.1f \n", car1.id, car1.Name , car1.Price);
    printf("Car 2 details= %d %s %.1f \n", car2.id, car2.Name , car2.Price);
 
    return 0 ; 
    }

