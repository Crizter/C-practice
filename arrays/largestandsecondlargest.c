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
max1 = max2 = INT_MIN;       // giving the largest and second largest the intial value//

// check for largest and second largest 
    for(i=1;i<=N;i++){
        if(arr[i]>max1){
            max2 = max1 ; // max 1 previous value gets assigned to max2 to make it second largest
            max1 = arr[i]; // max1 gets assigned by more larger variable//
        }
        else if(arr[i]>max2 && arr[i]<max1){ //otherwise the max2 is not greater than element but max1 is 
            max2 = arr[i];                     // is not then use this.
        }
    }
    printf("first largest %d",max1);
    printf("second largest %d",max2);

return 0 ;

}
