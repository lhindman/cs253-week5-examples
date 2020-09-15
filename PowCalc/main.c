#include <stdio.h>
#include <math.h>

int main(void) {

   int base = 0;
   int exp = 0;

   printf("Please enter the base: ");
   scanf("%d", &base);

   printf("Please enter the exponent: ");
   scanf("%d", &exp);

   printf("The result of %d raised to %d is: %0.0lf\n", base, exp, pow(base,exp));

   return 0;
}
