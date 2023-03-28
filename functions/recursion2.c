//CALCULATING FACTORIAL
#include <stdio.h>
#include <stdlib.h>
int factorial(int n )
{ if(n==1)
    return 1;
  else
  return n*factorial(n-1);
}

int main()
{
    int x = 10;
    printf("Enter the value of factorial:\n");
    scanf("%d",&x);
printf("Factorial of number %d is %d",x,factorial(x));
return 0 ; 
}
