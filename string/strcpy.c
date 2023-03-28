#include <stdio.h>
#include <string.h>

int main()
// {
//     // char str1[]="Hello world", str2[20];
   
//     // strcpy(str2,str1);
//     // printf("%s\n", str2);
//     // return 0 ;
// }

// CHAINING TOGETHER A SERIES OF STRCPY CALLS //
{
    char  str2[100] ; char str3[100];
   char  str1[] = "Hello world";
    strcpy(str3, strcpy(str2,str1));
    printf("%s\t\n%s", str2,str3);
    return 0 ;
}

// cons of strcpy is that it doesn't count the limit and may overwrite the memory, this can cause the 
// loss of important memory data.

// use strncpy for it.