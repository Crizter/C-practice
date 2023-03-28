#include <string.h>
#include <stdio.h>
int main()
{
    char str1[] = " Hello wold kindly fuck off . " ;
    char str2[3] ;
     strncpy(str2, str1, sizeof(str2));
     printf("%s\n",str2);
     return 0 ;
}
