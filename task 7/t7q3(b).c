#include <stdio.h>
//#define MEDIAN(x,y,z) ((x)>(y)?((x)>(z)?(z):(x)):((y)>(z)?(z):(y)))
#define MEDIAN(x, y, z) \
    (((x) >= (y) && (x) <= (z)) || ((x) >= (z) && (x) <= (y)) ? (x) : \
     ((y) >= (x) && (y) <= (z)) || ((y) >= (z) && (y) <= (x)) ? (y) : (z))

int main(){
 int a=11;
 int b=9;
 int c=5;

 printf("The median is : %d", MEDIAN(a,b,c));

    return 0;
}