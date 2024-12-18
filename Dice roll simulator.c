#include <stdio.h>
#include <time.h>
int main(void)
{
    srand( time(NULL));

    int dice = 10;
    int roll = 0;

    for (int i= 1; i<=dice ; i++)
    {
        roll = rand() % 6+1;          //rand() generates a pseudo-random integer.
                                                //% 6 limits the result to a range of 0-5.
                                                    //  Adding 1 shifts the range to 1-6, which simulates a die roll
        printf("Dice %d : %d\n", i,roll);

}

return 0;
}