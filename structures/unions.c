#include <stdio.h>
// WE ARE PRINTNING STORE - CLOTHES && BOOKS //

#pragma pack(1)
struct store{
    union { struct  { 
                    
                    char  *bookname;
                    int bookprice;
                    int numbofpages;
                    } book;
         
         struct  {
                        char *clothtype;
                        float clothlength ;
                    } shirt ;
                
                
                }item;

    };

    int main(){
        struct store s;
        s.item.book.bookname = "The Alchemist";
    
        s.item.book.bookprice = 500;
        s.item.book.numbofpages = 300;
        s.item.shirt.clothtype = "mencloth";
        s.item.shirt.clothlength= 90.0;
      printf("%s\n",s.item.shirt.clothtype);
           printf("%s\n",s.item.book.bookname);

       printf("%ld\n",sizeof(s));

        return 0 ;
    }



