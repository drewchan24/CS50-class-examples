#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(int argc, string argv[]){

    if (argc==2){

        printf("Hello, %s", argv[1]);

    }
    else{

        printf("%s", argv[0]);

    }
    printf("\n");
}