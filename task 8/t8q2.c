#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct grades{
  int id;
  int program,datastruct,math,algorithm;
};
void id( struct grades students[]){
  for(int i=0;i<10;i++){
    students[i].id=1000 +i;
    students[i].program= rand() %101;
    students[i].datastruct= rand() %101;
    students[i].math= rand() %101;
    students[i].algorithm= rand() %101;

    }
  }
int main(){
   struct grades students[10];
   int rule, search_id ,found=0;
   srand(time(NULL));
   
   
  printf("Are you 1)Admin 2)Student ? \n");
  scanf("%d", &rule); 
  id(students);

  switch (rule){
    case 1:{
     printf("  *Welcome admin* \n");
     printf(" Enter student ID: \n");
     scanf("%d", &search_id);
     
     for(int i=0;i<10;i++){
       if(students[i].id ==search_id){
        found=1;
        printf("    * Student Grades * \n");
        printf("Programming : %d \n",students[i].program);
        printf("Data Structure : %d \n",students[i].datastruct);
        printf("Discrete Math : %d \n",students[i].math);
        printf("Algorithms : %d \n",students[i].algorithm);

         char choice;
         printf("\n------------------\n");
         printf("Do you want to edit grades? (y/n) \n");
         scanf(" %c", &choice);
           if(choice=='y'|| choice =='Y'){
            printf("Enter new grade for programming: ");
            scanf("%d", &students[i].program);
            printf("Enter new grade for Data Structure : ");
            scanf("%d", &students[i].datastruct); 
            printf("Enter new grade for Discrete Math: ");
            scanf("%d", &students[i].math); 
            printf("Enter new grade for Algorithms: ");
            scanf("%d", &students[i].algorithm);

            printf("\n------------------\n");
            printf("Grades updates successfuly \n");
              printf(" * Student Grades * \n");
              printf("Programming : %d \n",students[i].program);
              printf("Data Structure : %d \n",students[i].datastruct);
              printf("Discrete Math : %d \n",students[i].math);
              printf("Algorithms : %d \n",students[i].algorithm);
             }
             else{   printf("\n------------------\n");
                     printf("No Changes made to grades \n"); }
            printf("\n------------------\n");
            printf("Session ended. Have a nice day Admin. ");
              break;

       }
      }
      if(!found)
        { printf("ID not found");}

      break;}

    case 2:{
     printf("   * Welcome student * \n");
     printf(" Enter student ID: \n");
     scanf("%d", &search_id);
     
     for(int i=0;i<10;i++){
       if(students[i].id ==search_id){
        found=1;
        printf("\n------------------\n");
        printf(" * Student Grades * \n");
        printf("Programming : %d \n",students[i].program);
        printf("Data Structure : %d \n",students[i].datastruct);
        printf("Discrete Math : %d \n",students[i].math);
        printf("Algorithms : %d \n",students[i].algorithm);
       break;
      }
       }
      if(!found)
        { printf("ID not found");}
        printf("\n------------------\n");
        printf("Session ended. Have a nice day Student.");
      break;}
      
    default:
     printf("Invalid rule");
      break;  }

  

    return 0;
}