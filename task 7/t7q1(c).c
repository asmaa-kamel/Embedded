#include <stdio.h>
#define mult(x,y) ((x)*(y)<100?1:0)

int main(){
  int a=20 ,b=4;
  printf("The result is : %d", mult(a,b));

    return 0;
}