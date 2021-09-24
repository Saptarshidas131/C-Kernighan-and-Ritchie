/* Program to print a Fahrenheit-Celsius Table */

#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* print Fahrenheit-Celsius table */

int main()
{
 int fahr;

 for(fahr = LOWER; fahr <= UPPER; fahr = fahr + 20)
   printf("%2d %6.1f\n",fahr, (5.0/9.0)*(fahr - 32));

  return 0;
}
