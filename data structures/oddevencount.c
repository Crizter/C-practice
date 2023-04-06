#define MAX_SIZE 100
#include <limits.h>
#include <stdio.h>
int main(){
// to print all the negative elements in array//
int arr[MAX_SIZE];
int i , N ;
int max1, max2 ;


printf("Enter the size of array:");
scanf("%d",&N);

for(i=1;i<=N;i++){
    printf("Enter the number %d: ",i);
    scanf("%d",&arr[i]);


}
int oddcount = 0  , evencount =0;
for(i=1;i<=N;i++){
    if(arr[i]%2==0){
        evencount++;
    }
    else{
        oddcount++;

    }
}
printf("total even and odd elements present are %d and %d",evencount,oddcount);
return 0 ;

}
//done till ques 6 
// https://codeforwin.org/c-programming/array-programming-exercises-and 