#include <stdio.h>
int *fun()
{
    int i = 10;
// return &i;       do not use return here .
}
int main() {
    int *p =fun();
    printf("%d",*p);

return 0 ;

}
