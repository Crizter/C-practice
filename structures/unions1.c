//copying of structer elements // 
#include <stdio.h>
#include <string.h>
int main(){
int price, discount_price, quantity , quant_price;
printf("Enter the quantity:\n");
scanf("%d",&quantity);
printf("Enter the price of quantity:");
scanf("%d",&price);
quant_price = quantity * price ;
printf("\n");
if(quant_price>1000){
  discount_price = (10*quant_price)/100 ;
  printf("The price after discount:%d\n",discount_price);
}
else
printf("The price of the items is :%d\n",price);


return 0 ; 
}
   // pan card number 
    //     QBHPS0623H 