// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[100]= "Hello";
//     char arr[] = " shiti siagjslkjf sdfjsljfsfd f count this di";

// strcat(str, arr);
// printf("%s",str);

// printf ("%s","kindly switch broo" );
//     return 0 ;
// }
#include <stdio.h>
int max_of_four(int p, int q, int r, int s);
//Add `int max_of_four(int a, int b, int c, int d)` here.
//*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int p, int q, int r, int s){
    scanf("%d %d %d %d", &p,&q,&r,&s);
    if(p>q && p>r && p>s){
        printf("%d",p);
    
    }
    else if(q>p && q>r && q>s){
        printf("%d",q);
        
    }
    else if(r>p && r>q && r>s){
        printf("%d",r);
    }  
    else if(s>p && s>q && s>r){
    printf("%d",s);
    }
    return 0;
    
}