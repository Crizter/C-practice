// print car details //

#include <stdio.h>
struct abc{
    int fuel_tank_type ;
    int seating_type;
    int city_mileage;
};

int main(){
    struct abc c[2];
    int i; 222
    for(i = 0 ; i<2 ; i++){
        printf("Car number : %d\n",i+1);
        printf("Enter fuel tank capacity \n" );
        scanf("%d", &c[i].fuel_tank_type);
        printf("Enter seating type :\n");
        scanf("%d",&c[i].seating_type);
        printf("Enter city mileage:\n");
        scanf("%d", &c[i].city_mileage);
    } 
    printf("\n");
 
 for(i = 0 ; i<2 ; i++){
        printf(" Car %d fuel tank\n ", c[i].fuel_tank_type);
        printf("Se ating type %d\n",c[i].seating_type);
        printf("%d City mileage\n ", c[i].city_mileage);
        printf("\n");

 }

    return 0 ;
}