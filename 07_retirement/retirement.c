#include <stdlib.h>
#include <stdio.h>

struct _retire_info{
  int months; //number of months it is applicable to
  double contribution; //how many dollars are contributted or spent (if negative)
  double rate_of_return; //for the rate of return
};

typedef struct _retire_info  retire_info;

void retirement(int startAge, double initial, retire_info working, retire_info retired){
  double balance = initial;
  int i;
  
  for (i=startAge;i<(startAge + working.months + retired.months);i++){
    printf("Age %3d month %2d you have $%.2f\n", i/12, i%12, balance);
    if (i < (startAge + working.months)){
	balance = balance + working.contribution +  balance*working.rate_of_return;
      }
    else{
      balance = balance + retired.contribution + balance*retired.rate_of_return;
    }
  }
}

int main(void){
  retire_info working;
  retire_info retired;

  working.months = 489;
  working.contribution = 1000;
  working.rate_of_return = 0.045/12;
  retired.months = 384;
  retired.contribution = -4000;
  retired.rate_of_return = 0.01/12;
  
  retirement(327, 21345, working, retired);
  
  return 0;
}
