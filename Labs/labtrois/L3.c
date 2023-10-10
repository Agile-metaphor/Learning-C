#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c, d, i=7, x;
    float p;
    double q;
    char yes[] = "y";
    char no[] = "n";
    char response[30];
    printf("Skip first part: 'y' or 'n'");
    scanf("%s", response);
    // part one
    if (response == "y")
    {
        printf("Enter four integers: \n");
        scanf("%d %d %d %d", &a, &b, &c, &d);
        printf("%d,%d,%d,%d \n", a, b, c, d);
        x = (a+b)*(c+d);
        printf("%d", x);
    }
    else
    {
        // part two
        printf("Give a value of p: ");
        scanf("%f", p);
        printf("p in decimal format = %f\n", p);
        printf("p in exponential format = %e\n", p);
    }
    return 0;

}
