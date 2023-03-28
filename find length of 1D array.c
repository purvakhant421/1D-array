#include <stdio.h>
int main()
{
  
  int numbers[] = {10, 20, 30, 40, 50};


  int arraySize = sizeof(numbers);
  int intSize = sizeof(numbers[0]);

 
  int length = arraySize / intSize;

  printf("Length of array = %d \n", length);
  return 0;
}