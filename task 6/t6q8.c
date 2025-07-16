#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void date(char da[]){
 char *months[]={"January","Febraury","March","April","May","June","July"
                  ,"August","September","October","November","December"};

char *token;

token = strtok(da, "/");
int mon = atoi(token);       
token = strtok(NULL, "/");
int day = atoi(token);       
token = strtok(NULL, "/");
int year = atoi(token); 

printf("The date : %d,%s,%d", day, months[mon-1],year);

}
int main (){
 char date1[30];
  printf("Enter the date in the format (mm/dd/yyyy) :");
  scanf("%s", date1);
  date(date1);

    return 0;
}