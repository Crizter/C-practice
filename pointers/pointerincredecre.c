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


// // using equality operators//
// int *p = &a[3];
// int *q = &a[5];
// printf("%d\n",p<=q);
// printf("%d\n",p>=q);
 
//  q=&a[3];
//  printf("%d",p==q);
//  //done till here//
 


 // doing some of arrays //

 int sum  = 0, *p;
 for(p=&a[0];p<&a[n];++p){
    sum += *p;
    printf("the sum is : %d\n",sum);
 }
    
    return 0 ; 
}
