#include <stdio.h>

int main() {

    char name[50];
    printf("What is your name?");
    scanf("%49s",name);
    printf("Hello,%s\n",name);
    return 0;

}