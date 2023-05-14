#include <stdio.h>
#include <stdlib.h>

struct complex {
   double real;
    double img ;

} ;
struct complex add(struct complex c1 , struct complex c2);
struct complex complex_number();
struct complex subtract(struct complex c1 , struct complex c2);
struct complex multiply(struct complex c1 , struct complex c2);


int main(){
struct complex c1 , c2 ;
printf("enter the complext number 1 :");
c1 = complex_number();
printf("enter the complex number 2 :");
c2 = complex_number();

// adding the complex number //
struct complex addition , subtraction , product ;
addition = add(c1, c2);
subtraction = subtract(c1,c2);
product = multiply(c1,c2);

printf("the sum of the number is  %2.lf+i%2.lf\n",addition.real, addition.img);
printf("the difference of the number is  %2.lf+i(%2.lf)\n",subtraction.real, subtraction.img);
printf("the product  of the number is  %2.lf+i(%2.lf)\n", product.real,product.img);

 return 0 ;

}
struct complex complex_number(){

    struct complex c ;

    printf("enter the real part :");
    scanf("%lf",&c.real);
    printf("enter the imaginary part");
    scanf("%lf",&c.img);

return c;
}
struct complex add(struct complex c1 , struct complex c2){
struct complex result ;
result.real = c1.real + c2.real;
result.img = c1.img + c2.img;

return result ;
}
struct complex subtract(struct complex c1 , struct complex c2){
struct complex result ;
result.real = c1.real - c2.real;
result.img = c1.img - c2.img;

return result ;
}
struct complex multiply(struct complex c1 , struct complex c2){
struct complex result ;
result.real = (c1.real)* (c2.real);
result.img = (c1.img) * (c2.img );

return result ;
}
