// // WAP to print numbers from 1 to 10 in such a way that when number is odd and 
// // when number is even subtract.

// #include <stdio.h>
// void odd();
// void even();

// int n = 1 ;
// void odd()
// {
//     if(n<=10){
//         printf("%d",n+1);
//     n++;
//     even();
//     }
//     return ;
// }
// void even()
// {
//     if(n<=10){
//         printf("%d",n-1);
//         n++;
//         odd();
//     }
//     else return ;
// }
// int main()
// {
//     odd();
// }


        #include <stdio.h>
           void  odd() ;
            void  even() ;
 int n = 1;
 void odd()
    {
        if(n<=10 )
        {printf("%d\t",n+1);
        n++;
        even();}
        else 
        return ;
        }

   
    void even(){
        if(n<=10)
        {printf("%d\t",n-1);
        n++;
        odd();}
    else
    return ; 

    }

   

        int main()
        {
            even();
        }



