#include <stdio.h>
#include <string.h>

void change(char word[]){
  char *p =word;

 while(*p!= '\0') {
  if(*p== 'f'){
    if (*p== 'f' && *(p+1) =='o' && *(p+2) =='o'){
      if (*(p+1) !='\0' && *(p+2) !='\0'){
    *p='x';
    *(p+1)= 'x';
    *(p+2)= 'x';
    p+=3;
    continue;
    }
  }
}
 p++;
 }
}

int main(){
 char word[100];   
  printf("please enter the word :");
  scanf("%s" ,word);
  change(word);
  printf("%s", word);
  
  return 0;
}