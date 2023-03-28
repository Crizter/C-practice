#include <stdio.h>
int main()
{
    int n ;
    // specifying array lenth//
    printf("enter the value of n :\n ");
    scanf("%d",&n);
//  taking array values //


    int i, a[n];
    for(i=0; i<n;i++)
    {printf("array elemetnt: \n");
    scanf("%d",&a[i]);
    printf("\n");}

// printing array values //
printf("printing the array in orignal order : \n");

 for(i=0; i<n;i++)

    {printf("%d\t",a[i]);
    
    }
    printf("\n");
// printing in reverse order
int *p;
printf("Printing in reverse order\n");
for(p= a+n-1; p>=a;p--){
    printf("%d\t",*p);

}
return 0 ; 
}
