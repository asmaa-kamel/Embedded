#include <stdio.h>
#define rem(x) ((x)%4)

int main(){
  int a=25 ,b;
  b= rem(a);
  printf("The reminder = %d", b);

    return 0;
}