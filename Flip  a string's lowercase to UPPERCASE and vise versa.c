#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char s[]= "abcdeFGHIJ";

    int length = strlen(s);

    for (int i=0; i<length; i++)

{
    if (isupper(s[i]))
    s[i] = tolower(s[i]);
    else if (islower(s[i]))
    s[i] =toupper(s[i]);
    
}

return 0;
}