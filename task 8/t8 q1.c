#include <stdio.h>
#include <string.h>

struct employee{
  int salary,bonus , deduction;
  
};

int main(){
    struct employee employees[3];
    int emp ,total;
    char *name[]={"Mohsen","Maged","Mariam"};

   printf("Choose the number of the employee: \n 1)Mohsen \n 2)Maged \n 3)Mariam \n");
   scanf("%d", &emp);
   printf("Employee %s Information: \n",name[emp-1]);
   printf(" Enter the salary:");
   scanf("%d", &employees[emp-1].salary);
   printf(" Enter the bonus:");
   scanf("%d", &employees[emp-1].bonus);
   printf(" Enter the deduction:");
   scanf("%d", &employees[emp-1].deduction);
   
   total =employees[emp-1].salary+employees[emp-1].bonus -employees[emp-1].deduction;
   printf("Total = %d \n",total);

    return 0;
}