#include <stdio.h>
#include <string.h>

void compare(){
  char small[21]="", large[21]="";
    char word1[21] ;

  printf("please enter the word :");
  scanf("%s",word1);

  if(strlen(word1) == 4)
   {printf("No words entered.");
     return;}

     strcpy(small,word1); 
     strcpy(large,word1);

  while(1){    
    
   if(strlen(word1) == 4)
     break;
     printf("please enter the word :");
     scanf("%s",word1);
    if(strlen(word1) == 4)
         {break;}
    if (strcmp(word1,small)<0)
        {strcpy(small,word1);} 

    if (strcmp(word1,large)>0)
       { strcpy(large,word1);}

  }
  printf("smallest is %s \n",small);
  printf("largest is %s ",large);
}


int main(){
  compare();
   
  return 0;
}