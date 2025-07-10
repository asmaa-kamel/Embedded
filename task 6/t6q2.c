#include <stdio.h>
#include <string.h>

void capitalize (char str[]){
    int i=0;
    while(str[i] !='\0'){
  if(str[i] >='a'&& str[i] <'z')
  { 
    str[i]=str[i]-32;
  }
  i++;
    }
}

int main(){
    char string[]="Hello world <3 !!";
    capitalize(string);
  printf("%s ",string);

  return 0;
}