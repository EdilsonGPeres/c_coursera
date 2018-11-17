#include <stdio.h>
#include <stdlib.h>
size_t maxSeq(int *array, size_t n);

int main(void){
  size_t x0;
  size_t x1;
  size_t x2;
  size_t x3;
  size_t x4;
  size_t x5;

  int array1[] = {0, 1, 2, 2, 2, 3, 8, 4, 6};
  int array2[] = {1, 15, 2, 20, 8, 34, 12, 50, 2};
  int array3[] = {11, 3, 8, 4, 9, 11, 15, 28, 36};
  int array4[] = {-1, 0, 5};
  int array5[] = {1, 1, 1, 1};

  x0 = maxSeq(NULL, 0);
  x1 = maxSeq(array1, 9);
  x2 = maxSeq(array2, 9);
  x3 = maxSeq(array3, 9);
  x4 = maxSeq(array4, 3);
  x5 = maxSeq(array5, 4);
  if (x0==(size_t)0 && x1==(size_t)3 && x2==(size_t)2 && x3==(size_t)6 && x4==(size_t)3 && x5==(size_t)1) {
    printf("valor correto\n");
    return EXIT_SUCCESS;
    }
  return EXIT_FAILURE;	 
}
