#include <stdio.h>
#include <stdlib.h>

int maxSeq(int *array, int n){
  if (n==0) return 0;
  int *ptrSeq = array;
  int count = 1;
  int countAux = 1;
  for (int i=1;i<n;i++){
    if (*ptrSeq < array[i]){
      countAux += 1;
      ptrSeq++;
      if (countAux > count) count = countAux;
      //   printf("O valor de cont auxiliar %d", countAux);
    }
    else{
      countAux = 1;
      ptrSeq++;
    }
  }
  return count;
}
