#include <stdio.h>
#define CHECK(x,y,n) ((((x)>=0&& (x)<n)&& ((y)>=0 && (y)<n))?1:0)

int main(){
 int x =5 ,y=4,n=6;
 printf("The result is : %d", CHECK(x,y,n));

    return 0;
}