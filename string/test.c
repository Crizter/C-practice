#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    char p[20];
    char s[] = "string";
    int length = strlen(s);
int i ;
    for(i=0;i<5; i++)
        p[i] = s[length - i];
        printf("%s",p);

 return 0 ;}
     







