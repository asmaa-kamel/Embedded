#include <stdio.h>
#define arr_size(arr) ((sizeof(arr))/sizeof((arr)[0]))

int main(){
    int x[]={5,4,7,2,9};
    int y=arr_size(x);
    printf("The size of the array = %d", y);

    return 0;
}