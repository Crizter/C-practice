#include <stdio.h>
#include <string.h>

int input(char str[],int n){
  int ch , i=0;
    while((getchar() != '\n'))
   
    if(i<n)
    str[i++] = ch;
    str[i] = '\0';
    return i;
}


int main()
{ 
    char str[100];
    int n = input(str, 10);
    printf("%d, %s", n , str);
    return 0 ;

}
