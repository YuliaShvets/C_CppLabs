#include <stdio.h>
#include <math.h>
  

 int main()
{
     float x = 0.042;
     float y = 3.03;
     float z = 13 * pow(x,4) - log(x + y) + tan(sqrt(y));
     printf("z=%f\n", z);
 };
