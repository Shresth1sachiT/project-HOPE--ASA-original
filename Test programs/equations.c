#include <stdio.h>
#include<math.h>

int main()
{   
    int x1, x2, y1, y2,z1,z2 ,dtn;    
    printf("Enter the First Point Coordinates   = ");
    scanf("%d %d%d",&x1, &y1,&z1);
	printf("\nEnter the Second Point Coordinates  = ");
    scanf("%d %d%d",&x2, &y2,&z2);
    int x = pow((x2- x1), 2);
    int y = pow((y2- y1), 2);
    int z = pow((z2- z1), 2);
    dtn = sqrt(x + y + z);
printf("\nThe Distance Between Them In Space is %d\n", dtn); 
}
