#include <stdio.h>
int main(){
    // program to print all the duplicate  elements  
int n , i , j ; 

printf("enter the elements size :");
scanf("%d",&n);

int a[n], b[n], freq[n] ;

for(i=0;i<n;i++){
    printf("enter the element %d\n",i);
    scanf("%d",&a[i]);
    freq[i]=-1;

}
// copying the element in second array 

for(i=0;i<n;i++){
   b[i]= a[i];

}
// logic

for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]==b[j]){
            freq[i] = 0;
        }
    }
}

for(i=0;i<n;i++){
    if(freq[i]==0){
        printf("%d\t",a[i]);
    }
}


return 0 ;
}