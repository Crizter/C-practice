// Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). 
// Store the information of the students.
#include <stdio.h>
#include <string.h>

struct student {
    int age ;
    int roll ;
    char name[50] ;
    char address[50];

};
struct student read();              

int main(){
    int total, i;

    printf("enter the total number of students whose detail is required ");
    scanf("%d",&total);
    struct student Student[total];

    for(i=0;i<total;i++){
        Student[i]= read();
    }
printf("Student details\n");

    for(i=0;i<total ;i++){
        printf("Name :%s\n",Student[i].name);
        printf("Age :%d\n",Student[i].age);
        printf("Roll :%d\n",Student[i].roll);
        printf("Address:%s\n",Student[i].address);
        printf("\n\n");

    }
return 0 ;

}





struct student read(){
   int a ;
   struct student student_data;
   do {
        printf("Choose the age of the student (11-14): ");
        scanf("%d", &a);
    } while (a < 11 || a > 14);

    // Set student's age
    student_data.age = a;

printf("enter the name of the student ");
scanf("%s",student_data.name);

printf("Enter the roll number of the student :");
scanf("%d",&student_data.roll);

printf("enter the address of the student :");
scanf("%s",student_data.address);

return student_data;
}
