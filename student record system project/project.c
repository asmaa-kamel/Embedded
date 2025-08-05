#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct students{
    int id,age,grade;
    char gender;
    char *name ,*password;
};

struct students *students =NULL;
int stdcount =0;

int id_check(int id){
  for(int i=0;i<stdcount; i++){
  if(students[i].id== id){
 return i;
  }}
  return -1; 
}

void add_student(){
 struct students newStudent;
 char name[100], pass[100],ch;
 
  printf("Enter student ID : ");
  scanf("%d", &newStudent.id);
      while(getchar()!='\n');
  int index= id_check(newStudent.id);
  if(index !=-1)
    {printf("This Id already exist ! \n");
   return;}
  getchar();
  printf("Enter student name : \n");
   int i=0;
   while((ch=getchar())!= '\n'&& sizeof(name)-1){
               name[i]=ch;
               i++;
            } name[i]='\0';
 
 
  printf("Enter student age : \n");
  scanf("%d", &newStudent.age);
      while(getchar()!='\n');

  do
    { printf("Enter student grade : \n");
      scanf("%d", &newStudent.grade);
          while(getchar()!='\n');
    if(newStudent.grade>100 || newStudent.grade<0)
    {printf("invalid grade! \nThe grade should be between 0:100");} }

  while(newStudent.grade>100 || newStudent.grade<0);
    
    
  
 
  printf("Enter student gender (M/F): \n");
  scanf(" %c", &newStudent.gender);
      while(getchar()!='\n');

  printf("Enter student password : \n");
  scanf("%s", pass);
      while(getchar()!='\n');
 
  newStudent.name=(char*)malloc(strlen(name)+1);
   strcpy(newStudent.name,name);
  newStudent.password=(char*)malloc(strlen(pass)+1);
   strcpy(newStudent.password,pass);
  students= realloc(students,(stdcount+1)*sizeof(struct students));
  students[stdcount]=newStudent;
   stdcount++;
   printf("\n Student added seccessfully \n");
}

void remove_student(){
    int id;
    printf("Enter the ID of the student to remove: ");
    scanf("%d", &id);
        while(getchar()!='\n');
    int index =id_check(id);
  if(id_check(id)==-1)
    {printf("Student not found");
     return ;}

  free(students[index].name);
  free(students[index].password);
  
  for(int i=index; i<stdcount-1; i++){
    students[i]=students[i+1];
  }
  stdcount--;

  students= realloc(students,stdcount*sizeof(struct students));

  printf("Student removed successfully \n");
}
void view_s_rec(){
     int id;
     
    printf("Enter the ID of the student: ");
    scanf("%d", &id);
        while(getchar()!='\n');
    int index =id_check(id);
     if(id_check(id)==-1)
    {printf("Student not found");
     return ;}
    printf("\n Student record : \n ");
    printf(" ID    : %d\n", students[index].id);
    printf(" Name   : %s\n", students[index].name); 
    printf(" Age    : %d\n", students[index].age); 
    printf(" Grade  : %d\n", students[index].grade); 
    printf(" Gender : %c\n", students[index].gender); 
}

void view_all_students(){
  if(stdcount==0)
  {printf("No students found");
   return ; }
  printf("\n  ** All students record ** \n");
  for(int i=0; i<stdcount;i++){
    printf("------------------------------\n");
    printf("Student %d :", i);
    printf(" ID    : %d \n", students[i].id);
    printf(" Name   : %s \n", students[i].name); 
    printf(" Age    : %d \n", students[i].age); 
    printf(" Grade  : %d \n", students[i].grade); 
    printf(" Gender : %c \n", students[i].gender); 
  }
    printf("------------------------------\n");

}

void edit_grade(){
    int id ,index, newgrade;
    
    printf("Enter the ID of the student: ");
    scanf("%d", &id);
     index =id_check(id);
     if(id_check(id)==-1)
    {printf("Student not found"); 
    }else {
      printf("Current grade : %d \n", students[index].grade);
      printf("Enter the new grade :");
      scanf("%d", &newgrade);
       do
        { printf("Enter student grade : \n");
          scanf("%d", &newgrade);
              while(getchar()!='\n');
          if(newgrade>100 || newgrade<0)
          {printf("invalid grade! \nThe grade should be between 0:100");} }
      
        while(newgrade>100 || newgrade<0);
    

      students[index].grade =newgrade;
      printf("Grade updated successfully.\n");

    }
}

void edit_pwd(){
  int id ,index;
  char current[50],newpwd[50];
   
    printf("Enter the ID of the student: ");
    scanf("%d", &id);
        while(getchar()!='\n');
    index =id_check(id);
     if(id_check(id)==-1)
      {printf("Student not found.\n"); 
     }else{
      printf("Enter your current password : \n");
      scanf("%s", current);
          while(getchar()!='\n');

         if(strcmp(current,students[index].password)!=0){
          printf("Wrong password.\n");
           }else{
            printf("Enter your new password :\n");
            scanf("%s", newpwd);
                while(getchar()!='\n');
            free(students[index].password);  
            students[index].password = (char *)malloc(strlen(newpwd) + 1);
            strcpy(students[index].password, newpwd);
            printf("Password changed successfully.\n");
           }
     }

}

void edit_name(){
  int id ,index, i=0;
  char new_name[50] ,ch;
   
    printf("Enter your ID : ");
    scanf("%d", &id);
        while(getchar()!='\n');
    index =id_check(id);
     if(id_check(id)==-1)
      {printf("Student not found.\n"); 
     }else{
            printf("Enter your new new name :\n");
            while((ch=getchar())!= '\n'&& sizeof(new_name)-1){
               new_name[i]=ch;
               i++;
            } new_name[i]='\0';
            free(students[index].name);  
            students[index].name = (char *)malloc(strlen(new_name) + 1);
            strcpy(students[index].name, new_name);
            printf("Password changed successfully.\n");
           }
     }



    //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!MAIN *****!!!!!!!!!!!!!!!!!!!!

int main(){

  //adding deafult students
   students=malloc(4*sizeof(struct students));
   
   students[0].id=5005;
   students[0].age=20;
   students[0].grade=100;
   students[0].gender='F';
   students[0].name=strdup("Asmaa Kamel");
   students[0].password=strdup("5115");

   students[1].id=2510;
   students[1].age=20;
   students[1].grade=90;
   students[1].gender='F';
   students[1].name=strdup("Sara");
   students[1].password=strdup("12345");

   students[2].id=1111;
   students[2].age=20;
   students[2].grade=85;
   students[2].gender='F';
   students[2].name=strdup("Soha");
   students[2].password=strdup("54321");

   students[3].id=0507;
   students[3].age=20;
   students[3].grade=92;
   students[3].gender='F';
   students[3].name=strdup("Esraa");
   students[3].password=strdup("0709");


   stdcount=4;
   

  int role ,i=0 , ad_choice,search_id ,user_choice ,user_id;
  char admin_password[]={"1234"};
  char adpwd[50] ,user_pwd[50];

  while(1){
    printf("------------------------------\n");
    printf("Welcome to our Student Record System. \n");
    printf("------------------------------\n");
    printf("Choose your role : 1)Admin 2)Student 3)Exit \n");
   if (scanf("%d", &role)!=1){
    printf("Invalid input. Please enter a number.\n");
    while(getchar()!='\n');
    continue;
   }
  if(role==3){
    printf("Ending program. Thanks for using our system.");
    break;
   }
   switch (role){
    case 1:{
      while (i!=3){
      printf("Enter your password :");
      scanf("%s", adpwd);
          while(getchar()!='\n');
       if(strcmp(adpwd, admin_password)!=0){
        i++;
         printf("Wrong password. \nyou have %d tries left. \n", 3-i);}
        if(i==3)
         {printf("End of program.\n");}
        
         else if (strcmp(adpwd, admin_password)==0)  {
            printf("------------------------------\n");
            printf("Correct password.\n");
            printf("------------------------------\n");
            printf("   ****Welcome Admin**** \n");
            printf("1)Add student record.\n");
            printf("2)Remove student record.\n");
            printf("3)View student record.\n"); 
            printf("4)View all records.\n");
            printf("5)Edit admin password.\n"); 
            printf("6)Edit student grade.\n");   
            printf("------------------------------\n");

                   
            scanf("%d", &ad_choice);  
                while(getchar()!='\n');
            switch (ad_choice){
             case 1:
               add_student();
              break;
             case 2:
               remove_student();
              break; 
             case 3:
               view_s_rec();
              break;
             case 4:
               view_all_students();
              break;  
             case 5:
               char current[50],newpwd[50];
               printf("Enter your current password :");
               scanf("%s", current);
                   while(getchar()!='\n');

               if(strcmp(current,admin_password)!=0){
                printf("Wrong password");
               }else{
                printf("Enter your new password :");
                scanf("%s", newpwd);
                    while(getchar()!='\n');
                strcpy(admin_password,newpwd);
                printf("\n Password changed successfully.\n");
                printf("------------------------------\n");
               }
              break; 
              case 6:
                edit_grade();
               break; 
         }
       break; }
    }  break; 
   } 
   case 2:{
      printf("------------------------------\n");
      printf("    ***Welcome student*** \n");
      printf("Enter your ID :");
      scanf("%d",&user_id);
          while(getchar()!='\n');
      printf("Enter your password: ");
      scanf("%s", user_pwd);
        while (getchar() != '\n');
         int index = id_check(user_id);
            if (index == -1) {
            printf("Student not found.\n");
              break;}
           if (strcmp(user_pwd, students[index].password) != 0) {
              printf("Wrong password.\n");
           break;
              }
      printf("\n------------------------------\n");   
      printf("1)View your record.\n");
      printf("2)Edit your password.\n");
      printf("3)Edit your name.\n");
      printf("\n------------------------------\n"); 
      scanf("%d", &user_choice);

      switch (user_choice){
       case 1:
         view_s_rec();
        break;
       case 2:
         edit_pwd();
        break;  
       case 3:
         edit_name();
        break;   
       
       }

     break; }
    
     default:
      printf("Not a valid input.\nRestarting program.\n");
     continue;
   
    } 
    }
      return 0;
      }