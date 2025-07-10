#include <stdio.h>
#include <string.h>

void build_index_url(const char*domain , char *index_url){

    strcpy(index_url,"http://www.");
    strcat(index_url,domain);
    strcat(index_url,"/index.html");

  printf("The url is : %s", index_url);

}
int main(){
  char dom[50], url[200];
    printf("Enter the domain of URL :");
    scanf("%s", dom);

 
  build_index_url(dom ,url);

  
    return 0;
}