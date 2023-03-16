#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nameStudent[40];
    printf("The Test was Successful\n");

    printf("Enter your name here:");
    scanf("%s", &nameStudent);
    printf("%s is your name\n\n", nameStudent);
    printf("#########################################################################\n\n");
    printf("SERVER: %s \n\n", nameStudent);
    printf("#########################################################################\n\n");

    return 0;
}
