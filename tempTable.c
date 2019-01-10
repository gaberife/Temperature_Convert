#include "tempConvert.h"
#include <stdio.h>

int tableRun()
{
/* Declare variables and initialize */
 int step = 0;
 double temp = 0;
 double fahr = 0;
 double cel = 0;
 double final = 0
  
/* Prompt the user to enter starting Celcius Temperature */
printf("Enter starting Celsius temperature: \n");
scanf("%lf",&cel);
 
/* Prompt the user to enter ending Celcius Temperature */
printf("Enter ending  Celsius temperature: \n");
scanf("%lf",&final);

/*Prompt the user to enter step size:*/
printf("Enter step size \n");
scanf("%d",&step);

/*Begin table*/
 printf("\n Celsius | Farenheit");
 printf("\n---------|----------");
 while(cel <= final){
  fahr  = cTof(cel);
  printf("\n%3.2f\t |  %3.2f", cel, fahr);
  cel += step;
  }
 printf("\n");
}

int main(){
  tableRun();
  return 0;
}
