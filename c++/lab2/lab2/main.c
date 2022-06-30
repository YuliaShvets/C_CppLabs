#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES


int main()
{
    printf("Task 1\n");
    for(double x = 5; x<=8; x+=0.2)
    {
        double y;
        if(x<5)
        {
            y = 1/(1-log(x+1));
            printf("y = %lf\n", y);
        }
        if (x>=6 && x<7)
        {
            y = sin(cos(x));
            printf("y = %lf\n", y);
        }
        if (x>=8)
        {
            y = log(pow(M_E, x)+pow(x, 2));
            printf("y = %lf\n", y);
        }
    }
    printf("Task 2\n");
    
    for(double x = 0.2; x <= 1.5; x+=0.02)
    {
        double y = 0, k;
        int n = 1;
        do
        {
            double fct = 1;
            for(int m = 1; m<=n; m++)
            {
                fct *= m;
            }
            k = pow((x-1), (2*n+1))/fct;
            y+=k;
            n++;
        }while(k>0.001);
        printf("y = %lf\n", y);
    }
    return 0;
}
