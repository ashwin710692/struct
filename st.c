#include <stdio.h>
struct employee {
   char name[50];
   int age;
   long int phone;
   int salary;
   
};


void display(struct employee s);

int main() {
   struct employee s1;

   printf("Enter name: ");


   scanf("%[^\n]%*c", s1.name);

   printf("Enter age: ");
   scanf("%d", &s1.age);
   printf("enter phone number: ");
   scanf("%ld", &s1.phone);
   printf("enter salary: ");
   scanf("%d", &s1.salary);
   

   display(s1);

   return 0;
}

void display(struct employee s) {
   printf("\nDisplaying information\n");
   printf("Name: %s", s.name);
   printf("\nAge: %d", s.age);
    printf("phone number: %ld", s.phone);
   printf("\nsalary: %d", s.salary);
}
