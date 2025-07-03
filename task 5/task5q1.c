#include <stdio.h>

int main(){
   int x=10;
   printf("Initial Value = %d  ",x);
   int *point =&x;
   *point =20;
   printf("\nChanged Value = %d",x);
}

