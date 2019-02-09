#include <stdio.h>
 
void main()
{
    int num;
 
    printf("Enter a number: \n");
    scanf("%d", &num);
    if (num > 0)
        printf("%d Positive \n", num);
    else if (num < 0)
        printf("%d Negative \n", num);
    else
        printf("Zero");
}
