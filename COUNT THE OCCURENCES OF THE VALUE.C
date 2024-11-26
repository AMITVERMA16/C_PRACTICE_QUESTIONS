#include <stdio.h>
 int main (void)

 {
    int myarray[]= { 4,3,5,3,6,4,7,56,46,54,5,};
    int count = 0;
    int to_find =5;

    for (int i = 0; i<11; i++)
    {
        if (myarray[i] == to_find) count++;
    }
 printf("# of 5s found : %d\n", count );
 return 0;
 }