include <stdio.h>
#include "tempConvert.h"
double cTof(double cel){
  return (9.0/5 * cel) + 32;
}

double fToc(double fahr){
  return (fahr - 32) * 5.0/9;
}
