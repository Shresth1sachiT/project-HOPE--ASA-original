#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3],b[3],a1,b1,sas;
	float c1,s1,s2;
	printf("Enter vertex of parabola and focus \n");
	scanf("%d\t%d\n",&a1,&b1);
	printf("we have found that the vertex of parabola and focus is is\n");
    scanf("x coordinate=%d\ty coordinatr=%d\tfocus=%f\n",a1,b1,c1);
    for(sas=0;sas<3;sas++)
    {
    printf("ENTER PASSING POINT OR PATH\n");
	scanf("%d\t%d\n",&a[sas],&b[sas]);
    printf("SOMEONE WAS FOUND THAT THIS PARABOLA PASSES THROGH THE POINT %d AND %d\n",a[sas],b[sas]);
    printf("LETS CHECK IT OUT\n");
    s1=(b[sas]-b1)^2;
    s1=c1*4*(a[sas]-a1);
	if(b[sas]=!0)
{
if(s1==s2);	
{
	printf("parabola\n");
	printf("HERE THE EQUATION OF PARABOLA IS\n");
printf("(y-%d)^2=4%f(x-%d)",b1,c1,a1);
}
}
else
{
	printf("EXPECTATION FAILED\n");
}
}
getch();
}
