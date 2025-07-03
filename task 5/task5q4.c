#include <stdio.h>

void bubble_sort (int arr[], int size){
 for(int i=0; i<size-1; i++){
    for(int j=0; j<size-i-1; j++){
      if(arr[j]> arr[j+1]){
       int temp = arr[j];
       arr[j] = arr[j + 1];
       arr[j + 1] = temp;

      }
    }
  }
 printf("sorted array: ");
 for(int k=0; k<size ;k++){
    printf("%d ",arr[k]);
 }
  printf("\n");
}
int main()
{
    int array[]={1,5,3,4,6};
    int size = sizeof(array) / sizeof(array[0]);

    bubble_sort(array, size);
    return 0;
}