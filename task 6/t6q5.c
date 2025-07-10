#include <stdio.h>
#include <string.h>

void get_extension(char file[], char *extension){
 char *p= file +strlen(file)-1;
 while(p>= file){
    if(*p=='.'){
     if(*(p+1)!='\0'){
        strcpy(extension,p+1);
     }
     else{
        extension[0]='\0';
     }
     return;
    }
    p--;
 }
   extension[0]='\0';

}
int main(){
    char name[100];
    char ext[20];
 printf("Enter the name of the file :");
 scanf("%s", name);
 get_extension(name,ext);
  if(ext[0]=='\0'){
   printf("No extension for the file.");
  }else{
   printf("The extension is : %s", ext); 
  }
    return 0;
}