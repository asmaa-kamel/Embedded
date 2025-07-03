#include <stdio.h>

int main(){
    int x=5 , y=4, z=7;
    int *px = &x, *py = &y, *pz = &z;
    int *pk;
  printf("Before swapping :\n");
  printf("the first number :%d %p \n",x ,px );
  printf("the second number :%d %p \n",y ,py );
  printf("the third number :%d %p",z ,pz );

  printf("\nSwapping pointers");
  pk= px;
  px= py;
  py= pz;
  pz= pk;
  printf("After swapping :\n");
  printf("the first number :%d %p \n",x ,px );
  printf("the second number :%d %p \n",y ,py );
  printf("the third number :%d %p",z ,pz );

    return 0;
}