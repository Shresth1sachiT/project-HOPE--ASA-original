#include<stdio.h>
#define PI 3.141592

int main()
{
    float major44, minor44, area66;

    /* Reading length of major axis */
    printf("Enter major axis: ");
    scanf("%f", &major44);

    /* Reading length of minor axis */
    printf("Enter minor axis: ");
    scanf("%f", &minor44);

    /* Calculating area of an ellipse */
    area66 = PI * major44 * minor44;

    /* Displaying result */
    printf("Orbit Area is approximatly %0.4f", area66);

    return 0;
}
