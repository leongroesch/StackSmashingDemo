#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


static const char bash[] = "/bin/bash";

void vul(char* input)
{
    char user[10];
    strcpy(user, input);
}

void secret(){
    system("/bin/bash");
}

int main(int argc, char* argv[])
{
    if (argc > 1)
        vul(argv[1]);
    else
        printf("Expected at least one argument");

    return 1;
}