#include <stdio.h>
int main(){
  // Write a program in C to separate individual characters from a string
  // hello  = H E L L O 
char string[100] ;
printf("enter the string : ");
scanf("%s",string);
printf("\n");
printf("the string entered is : %s\n",string);

// to separate individual characters // 
int i = 0 ; 

printf("\n printing the individual string \n");
while(string[i] != '\0'){
  printf("%c\t",string[i]);
  i++;
}
}
