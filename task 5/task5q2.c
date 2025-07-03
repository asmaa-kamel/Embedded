#include <stdio.h>

int sum(int *a, int *b){
   return *a+*b ;
}


int main(){
  int x ,y ;
   printf("Enter two numbers");
   scanf("%d %d",&x ,&y);
   int res= sum (&x , &y);
   printf("The summation of the to numbers= %d",res);

return 0;
}