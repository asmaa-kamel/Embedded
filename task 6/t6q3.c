#include <stdio.h>
#include <string.h>

void capitalize (char *str){
    char *p= str;
    while(*p !='\0'){
  if(*p >='a'&& *p <='z')
  { 
    *p= *p-32;
  }
  p++;
    }
}

int main(){
    char string[]="Hello world <3 !!";
    capitalize(string);
  printf("%s ",string);

  return 0;
}