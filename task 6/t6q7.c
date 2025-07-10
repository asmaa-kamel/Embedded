#include <stdio.h>
#include <string.h>

void remove_filename(char url[]){
 char *p= url +strlen(url)-1;
  while(p>= url){
     if(*p=='/'){
       *(p+1)='\0';
       break;
      }
      p--;
    } 
  printf("The URL is : %s", url);

}

int main(){
   char url[100];
  printf("Enter the url :");
  scanf("%s", url);
  remove_filename(url);
    return 0;
}