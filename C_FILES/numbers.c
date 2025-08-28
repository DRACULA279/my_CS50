#include <stdio.h>

int main(void) 
{

    int x, y ;
    printf("Enter value for x : ");
    scanf("%d", &x);
    printf("Enter value for y : ");
    scanf("%d", &y);

    if (x > y) {
        printf("x = %d is greater than y = %d\n",x,y);      
    }   
    else if (x < y) {
        printf("x = %d is less than y = %d\n",x,y);      
    }       
    else {
        printf("x = %d is equal to y = %d\n",x,y);      
    }

    return 0;

}