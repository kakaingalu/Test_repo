#include <stdio.h>
#include <stdlib.h>

void nope()
{
    puts("Nope.");
    exit(1);
}

int main()
{
    int r;
    char input[50];
    printf("Please enter the secret number: ");
    r = scanf("%49s", input);
    if (1 != r)
        nope();
    if ('9' != input[1])
        nope();
    if ('6' != input[0])
        nope();
    fflush(stdin);
    /* REST OF APPLICATION */
    return 0;
}
