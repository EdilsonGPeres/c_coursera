#include <stdio.h>
#include <stdlib.h>
int max2(int x, int y);

int max2(int x, int y){
  if (x > y){
    return x;
  }
  else{
    return y;
  }
}

void squares(int size1, int x_offset, int y_offset, int size2) {
  //compute the max of size1 and (x_offset + size2).  Call this w
  int w = max2(size1, (x_offset + size2));
  //compute the max of size1 and (y_offset + size2).  Call this h
  int h = max2(size1, (y_offset + size2));
  //count from 0 to h. Call the number you count with y
  int y = 0;
  int x = 0;
  for (y=0;y<h;y++){
    //count from 0 to w. Call the number you count with x
    for (x=0;x<=w;x++){
      //check if  EITHER
      //    ((x is between x_offset  and x_offset +size2) AND 
      //     y is equal to either y_offset OR y_offset + size2 - 1 )
      //  OR
      //    ((y is between y_offset and y_offset + size2) AND
      //     x is equal to either x_offset OR x_offset + size2 -1)
      // if so, print a *
      if ((x>=x_offset && x<(x_offset+size2) && (y==y_offset || y==(y_offset+size2-1))) || (y>=y_offset && y<(y_offset+size2) && ( x==x_offset || x==(x_offset+size2-1))))  {
	printf("*");
      }
      //if not,
      else{
      // check if EITHER
      //    x is less than size1 AND (y is either 0 or size1-1)
      // OR
      //    y is less than size1 AND (x is either 0 or size1-1)
      //if so, print a #
	if ((x<size1 && ((y==0) || y==(size1-1))) || (y<size1 && (x==0 || x==size1-1))) {
	  printf("#");
	}
	else{
	  printf(" ");
	}
      }
      //else print a space
    //when you finish counting x from 0 to w, 
    //print a newline
    }
    printf("\n");
  }
}
