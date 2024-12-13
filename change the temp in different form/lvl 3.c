#include <stdio.h>

int main(void)
{
    double C = 0;
    double F =0;
    double start = 0;
    double end = 0;
    double step = 0;



    printf("Enter start C temp : ");
    scanf("%lf", &start);

       printf("Enter end C temp : ");
    scanf("%lf", &end);

       printf("Enter step C temp : ");
    scanf("%lf", &step);




    for(C = start ; C <= end; C += step)
    {
        F = (C*1.8)+32;

    printf(" %1.2lf  %8.2lf\n", C , F);
 
    }


    return 0;
}
