#include <stdio.h>
#include <string.h>

void rem_space( char text[]){
  char *p= text;
  char *dest= text;

  while(*p!= '\0'){
    if(*p !=' '){
        *dest =*p;
        dest++;
    }
    p++;
  }
 *dest ='\0';
}

int main(){
  char text[100]; 
  int i=0;
  char ch;

   printf("Enter the text :");
   while((ch= getchar())!= '\n'&& i<99){
    text[i]=ch;
    i++;
   }
    text[i]='\0';
   rem_space(text);
 
   printf("Text without space : %s", text);
    return 0;
}