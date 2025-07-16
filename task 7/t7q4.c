#include <stdio.h>
#define Spanish

#ifdef English
 #define Message "Insert Disk 1"
#elif defined(French) 
 #define Message "Inserez Le disque 1"
#elif defined(Spanish) 
 #define Message "Inserte El Disco 1"
#else
 #define Message "Language not supported"
#endif

int main(){

  printf("%s ", Message);
    return 0;
}