#include <stdio.h>
#define sq(x) (x)*(x)
#define third_p(x) (x)*(x)*(x)
#define fourth_p(x) (x)*(x)*(x)*(x)
#define fifth_p(x) (x)*(x)*(x)*(x)*(x)
#define POL(x) ((3*fifth_p(x))+(2*fourth_p(x))-(5*third_p(x))-(sq(x))+(7*(x))-6)

int main(){
  int a=5;
  printf("The value of the polynomial = %d", POL(a));
  

    return 0;
}